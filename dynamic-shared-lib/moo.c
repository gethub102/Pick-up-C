// gcc -shared -o libmoo.so moo.c
// file libmoo.so // Mach-O 64-bit dynamically linked shared library x86_64

#include <stdio.h>

int addnumbers(int a, int b) {
	int sum;
	sum = a + b;
	return sum;
}