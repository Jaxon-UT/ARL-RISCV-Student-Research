/*
Jaxon Coward
7/22/2020
*/


#define GPIO_BASE 0x40000000
#define GPIO *((volatile char*)GPIO_BASE)


//These are the delays that are modified
#define FIRST_DELAY 10000   //delay1()
#define SECOND_DELAY 20000  //delay2()
#define THIRD_DELAY 40000   //delay3()

void delay1();
void delay2();
void delay3();

void _start(void)
{
  GPIO = 0x1;
  delay1();
  GPIO = 0x0;
  delay2();
  GPIO = 0x1;
  delay3();

  GPIO = 0x0;
  delay1();
  GPIO = 0x1;
  delay2();
  GPIO = 0x0;
  delay3();

  GPIO = 0x1;

  while(1){
    GPIO = 1;
    delay1();//this delay chosen arbitrarily to keep line high
  }
}

void delay1(){
  volatile int i = 0;
  while(i < FIRST_DELAY){
    i++;
  }
  i = 0;
}

void delay2(){
  volatile int j = 0;
  while(j < SECOND_DELAY){
    j++;
  }
  j = 0;
}

void delay3(){
  volatile int k = 0;
  while(k < THIRD_DELAY){
    k++;
  }
  k = 0;
}
