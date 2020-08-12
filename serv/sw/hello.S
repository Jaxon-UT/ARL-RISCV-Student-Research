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
#define DELAY 0x1 /* Loop 1 times before inverting the LED */
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

bl0:
	li t0, 1

	/* Write to LEDs */
	sb t0, 0(a0)

	/* Reset timer */
	and t2, zero, zero

	/* Delay loop */
time0:
	addi t2, t2, 1
	bne t1, t2, time0


bl1:
	li t0, 1

	/* Write to LEDs */
	sb t0, 0(a0)

	/* Reset timer */
	and t2, zero, zero

	/* Delay loop */
time1:
	addi t2, t2, 1
	bne t1, t2, time1


bl2:
	li t0, 1

	/* Write to LEDs */
	sb t0, 0(a0)

	/* Reset timer */
	and t2, zero, zero

	/* Delay loop */
time2:
	addi t2, t2, 1
	bne t1, t2, time2


bl3:
	li t0, 0

	/* Write to LEDs */
	sb t0, 0(a0)

	/* Reset timer */
	and t2, zero, zero

	/* Delay loop */
time3:
	addi t2, t2, 1
	bne t1, t2, time3


//start char A===============
bl4:
	li t0, 1

	/* Write to LEDs */
	sb t0, 0(a0)

	/* Reset timer */
	and t2, zero, zero

	/* Delay loop */
time4:
	addi t2, t2, 1
	bne t1, t2, time4


bl5:
	li t0, 0

	/* Write to LEDs */
	sb t0, 0(a0)

	/* Reset timer */
	and t2, zero, zero

	/* Delay loop */
time5:
	addi t2, t2, 1
	bne t1, t2, time5


bl6:
	li t0, 0

	/* Write to LEDs */
	sb t0, 0(a0)

	/* Reset timer */
	and t2, zero, zero

	/* Delay loop */
time6:
	addi t2, t2, 1
	bne t1, t2, time6


bl7:
	li t0, 0

	/* Write to LEDs */
	sb t0, 0(a0)

	/* Reset timer */
	and t2, zero, zero

	/* Delay loop */
time7:
	addi t2, t2, 1
	bne t1, t2, time7


bl8:
	li t0, 0

	/* Write to LEDs */
	sb t0, 0(a0)

	/* Reset timer */
	and t2, zero, zero

	/* Delay loop */
time8:
	addi t2, t2, 1
	bne t1, t2, time8

bl9:
	li t0, 0

	/* Write to LEDs */
	sb t0, 0(a0)

	/* Reset timer */
	and t2, zero, zero

	/* Delay loop */
time9:
	addi t2, t2, 1
	bne t1, t2, time9


blA:
	li t0, 1

	/* Write to LEDs */
	sb t0, 0(a0)

	/* Reset timer */
	and t2, zero, zero

	/* Delay loop */
timeA:
	addi t2, t2, 1
	bne t1, t2, timeA

blB:
	li t0, 0

	/* Write to LEDs */
	sb t0, 0(a0)

	/* Reset timer */
	and t2, zero, zero

	/* Delay loop */
timeB:
	addi t2, t2, 1
	bne t1, t2, timeB


	li t0, 1

	/* Write to LEDs */
	sb t0, 0(a0)
