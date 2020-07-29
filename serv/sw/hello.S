/*
* LED Blinker
* Assuming that GPIO_BASE is mapped to a GPIO core, which in turn is
* connected to LEDs, this will light the LEDs one at a time.
* Useful as smoke test to see that serv is running correctly
*/
#ifndef GPIO_BASE
#define GPIO_BASE 0x40000000
#endif

#ifndef DELAY
#define DELAY 0x100000 /* Loop 100000 times before inverting the LED */
#endif

	/*
	a0 = GPIO Base address
	t0 = Value
	t1 = Timer max value
	t2 = Current timer value

	*/

.globl _start
_start:
	/* Load GPIO base address to a0 */
	lui a0, %hi(GPIO_BASE)
	addi a0, a0, %lo(GPIO_BASE)

	/* Set timer value to control blink speed */
	li t1, DELAY

loop1:
	/* print "DONE" */
	lui a0,0x40000000>>12
	addi a1,zero,'D'
	addi a2,zero,'O'
	addi a3,zero,'N'
	addi a4,zero,'E'
	addi a5,zero,'\n'


	sw a1,0(a0)
	jal time1
	sw a2,0(a0)
	jal time1
	sw a3,0(a0)
	jal time1
	sw a4,0(a0)
	jal time1
	sw a5,0(a0)
	jal time1

	li a0, 0x20000000
	li a1, 123456789
	sw a1,0(a0)

	j loop1

	/* Reset timer */
time1:
	and t2, zero, zero

	/* Delay loop */
time2:
	addi t2, t2, 1
	bne t1, t2, time2
	ret
