#include <stdio.h>

int main(void) {
	int a = 5;
	int b = 5;

	a = a ^ b;
	b = a ^ b;
	a = a ^ b;

	printf("a = %d\n", a);
	printf("b = %d\n", b);
}