#include <stdio.h>
#include <stdint.h>

typedef uint32_t int32;

int main(void) {
	int32 a[4];
	a[0] = 3;
	a[1] = 2;
	a[2] = 4;
	a[3] = 5;

	int32 b[4] = {5,6,7,8};
	printf("a values are %d, %d, %d, %d\n", a[0], a[1], a[2], a[3]);


	printf("b values are %d, %d, %d, %d\n", b[0], b[1], b[2], b[3]);
	
	return 0;
}
