// This is free and unencumbered software released into the public domain.
//
// Anyone is free to copy, modify, publish, use, compile, sell, or
// distribute this software, either in source code form or as a compiled
// binary, for any purpose, commercial or non-commercial, and by any
// means.
//Created by Jaxon Coward 6/16/2020

#include "firmware.h"



void fibonacci_test(unsigned int num);
void test_mem_map(uint32_t addr_base, int port_num);
void print_hex_nl(unsigned int val, int digits);
void print_hex_str(unsigned int val, int digits, const char *p);
void print_dec_nl(int num);

int main(void)
{
	//print_str("\nhello world, from ARL\n\n");

	//fibonacci_test(10);

	//sieve();

	test_mem_map(0x30000000, 3);
	test_mem_map(0x40000000, 4);

	//stats();
	return 0;
}

void test_mem_map(uint32_t addr_base, int port_num){
	unsigned int volatile * const port = (unsigned int *) addr_base;

	print_str("\nMemory Mapping Test Base Address 0x");
	print_hex_str(addr_base, 8, ":\n");


	for(int i = 0; i < port_num; i++){
		print_str("Port ");
		print_dec(i);
		print_str(": ");
		print_hex_nl(*(port + i), 8);
	}
	print_str("\n");

	unsigned int hex_words[5];
	hex_words[0] = 0xdeadbeef;
	hex_words[1] = 0xfacedeaf;
	hex_words[2] = 0x8badf00d;
	hex_words[3] = 0xcafed00d;
	hex_words[4] = 0xbaddcafe;

	for(int i = 0; i < port_num; i++){
		print_str("Port ");
		print_dec_nl(i);
		print_hex_nl(*(port + i), 8);

		print_str("Write to Port ");
		print_dec_nl(i);
		*(port + i) = hex_words[i];
		print_hex_nl(*(port + i), 8);
		print_hex_str(*(port + i), 8, "\n\n");
	}

	for(int i = 0; i < port_num; i++){
		print_str("Port ");
		print_dec(i);
		print_str(": ");
		print_hex_nl(*(port + i), 8);
	}
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

//calls print_hex and adds a \n
void print_hex_nl(unsigned int val, int digits){
	print_hex(val, digits);
	print_str("\n");
}

//calls print_hex and appens string p to the end
void print_hex_str(unsigned int val, int digits, const char *p){
	print_hex(val, digits);
	print_str(p);
}

void print_dec_nl(int num){
	print_dec(num);
	print_str("\n");
}
