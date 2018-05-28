#include <stdio.h>

#define BIT3 (0x01 << 2)

/*  set the third bit for n  */
void set_bit3(int *n);

/* clear the third bit for n */
void clear_bits3(int *n);

#define TEST_SET 1
#define TEST_CLEAR 0

int main(void) {

	int a = 0;
#if TEST_SET
	set_bit3(&a);
	printf(" a = %d\n", a);

#elif TEST_CLEAR
	clear_bits3(&a);
	printf("a = %d\n", a);

#endif
	return 0;
}

void set_bit3(int *n) {
	*n |= BIT3;
}

void clear_bits3(int *n) {
	*n &= ~BIT3;
}

