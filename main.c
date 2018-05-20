#include <stdio.h>
#include <stdint.h>

void add_numbers (int*a, int*b, int*c);

int main(void) {

	int c = 0;
	int a = 2, b = 3;
	add_numbers(&a, &b, &c);
	printf("c = %d\n", c);
	return 0;
}

void add_numbers (int *a, int *b, int *c) {
	*c = *a + *b;
}
