/*
 * Copyright (c) 2012-2014 Wind River Systems, Inc.
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#define GPIO_BASE 0x40000000
#define UARTDELAY 10
#define DELAY 100

void delay();
void uartdelay();
void print_chr(char ch);

void _start(void)
{
  print_chr('h');
}

void delay(){
 for(unsigned int idx = 0;idx < DELAY;idx++) asm volatile("");
}

void uartdelay(){
 for(unsigned int idx = 0;idx < UARTDELAY;idx++) asm volatile("");
}

void print_chr(char ch)
{
	*((volatile char*)GPIO_BASE) = ch;
}
