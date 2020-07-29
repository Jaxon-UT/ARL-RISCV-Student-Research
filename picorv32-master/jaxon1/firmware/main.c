// This is free and unencumbered software released into the public domain.
//
// Anyone is free to copy, modify, publish, use, compile, sell, or
// distribute this software, either in source code form or as a compiled
// binary, for any purpose, commercial or non-commercial, and by any
// means.
//Created by Jaxon Coward 6/16/2020

#include "firmware.h"



void fibonacci_test(unsigned int num);
void test_mem_map(uint32_t addr_base);

int main(void)
{
	//print_str("\nhello world, from Jaxon\n\n");

	//fibonacci_test(10);

	//sieve();

	test_mem_map(0x30000000);
	test_mem_map(0x40000000);

	//stats();
	return 0;
}

void test_mem_map(uint32_t addr_base){
	unsigned int volatile * const port = (unsigned int *) addr_base;

	print_str("\nMemory Mapping Test Base Address 0x");
	print_hex(addr_base, 8);
	print_str(":\n");


	print_hex(*port, 8);
	print_str("\n");
	print_hex(*(port + 1), 8);
	print_str("\n");
	print_hex(*(port + 2), 8);
	print_str("\n\n");

	print_hex(*port, 8);
	print_str("\n");
	*port = 0xfadebead;
	print_hex(*port, 8);
	print_str("\n");
	print_hex(*port, 8);
	print_str("\n");

	print_str("\n");

	print_hex(*(port + 1), 8);
	print_str("\n");
	*(port + 1) = 0xcafefeed;
	print_hex(*(port + 1), 8);
	print_str("\n");
	print_hex(*(port + 1), 8);
	print_str("\n");

	print_str("\n");

	print_hex(*(port + 2), 8);
	print_str("\n");
	*(port + 2) = 0xdeafface;
	print_hex(*(port + 2), 8);
	print_str("\n");
	print_hex(*(port + 2), 8);
	print_str("\n");

	print_str("\n");
}

void fibonacci_test(unsigned int num){
	print_str("Fibonacci Test:\n");

	int fib1 = 0;
	int fib2 = 1;
	if(num == 0){
		return;
	}
	print_dec(fib1);
	print_str(", ");


	for(unsigned int i = 1; i < num; i++){
		print_dec(fib2);
		if(i + 1 < num){
			print_str(", ");
		}

		int temp = fib2;
		fib2 += fib1;
		fib1 = temp;


	}
	print_str("\n\n");
}
