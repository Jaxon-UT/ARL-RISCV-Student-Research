/*****
Created using code from the vex mrax demo b
Written by Jaxon Coward
7/3/2020
*****/



#include <stdint.h>

#include <murax.h>

void print_uart_str(const char *p);
void print_hex(unsigned int val, int digits);

char input[32] = {0};
int input_index = 0;

void main() {
	volatile uint32_t a = 1, b = 2, c = 3;
	uint32_t result = 0;

	interruptCtrl_init(TIMER_INTERRUPT);
	prescaler_init(TIMER_PRESCALER);
	timer_init(TIMER_A);

	TIMER_PRESCALER->LIMIT = 12000-1; //1 ms rate

	TIMER_A->LIMIT = 1000-1;  //1 second rate
	TIMER_A->CLEARS_TICKS = 0x00010002;

	TIMER_INTERRUPT->PENDINGS = 0xF;
	TIMER_INTERRUPT->MASKS = 0x1;

	GPIO_A->OUTPUT_ENABLE = 0x000000FF;
	GPIO_A->OUTPUT = 0x00000000;

	UART->STATUS = 2; //Enable RX interrupts
	print_uart_str("CODE START\n");

	input [0] = '=';

	while(1){
		result += a;
		result += b + c;
		for(uint32_t idx = 0;idx < 50000;idx++) asm volatile("");
		GPIO_A->OUTPUT = (GPIO_A->OUTPUT & ~0x3F) | ((GPIO_A->OUTPUT + 1) & 0x3F);  //Counter on LED[5:0]

		if(input[input_index] == '\n'){
			if(input_index == 1){
				print_uart_str("GPIO input is:\n");
				print_hex(GPIO_A->INPUT, 8);
				print_uart_str("\nGPIO output is:\n");
				print_hex(GPIO_A->OUTPUT, 8);
				print_uart_str("\n");

			}else{
				print_uart_str(input);
			}



			for(int i = 1;i < 32 && input[i]!=0; i++){
				input[i] = 0;
			}

			input_index = 0;
		}
	}
}

void irqCallback(){
	if(TIMER_INTERRUPT->PENDINGS & 1){  //Timer A interrupt
		GPIO_A->OUTPUT ^= 0x80; //Toogle led 7
		TIMER_INTERRUPT->PENDINGS = 1;
	}


	while(UART->STATUS & (1 << 9)){ //UART RX interrupt
		input[++input_index] = (UART->DATA) & 0xFF;
		// UART->DATA = input[index];
	}
}

void uart_delay(){
	for(uint32_t idx = 0;idx < 100;idx++) asm volatile("");
}

void print_uart_str(const char *p){
	while (*p != 0){
		uart_delay();
		UART->DATA = *(p++);
	}
}

void print_uart_str_backwards(const char *p){
	int i = 0;
	while(p[i] != 0){
		i++;
	}

	i--;

	if(p[i] == '\n'){
		i--;
	}

	while (i >= 0){
		uart_delay();
		UART->DATA = p[i--];
	}

	print_uart_str("\n");
}

void print_hex(unsigned int val, int digits)
{
	for (int i = (4*digits)-4; i >= 0; i -= 4){
		uart_delay();
		UART->DATA = "0123456789ABCDEF"[(val >> i) % 16];
	}
}
