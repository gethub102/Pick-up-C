#include <stdio.h>
#include <stdint.h>

int main(void) {
	printf("Hello world\n");

	uint32_t a, b, c;
	b = 2;
	c = 3;
	printf("values are %d, %d, %d\n", a, b, c);

	char ch;
	printf("ch is %c", ch);

	ch = 'A';
	printf("ch is %c\n", ch);
	printf("ch is %d\n", ch);


	typedef uint32_t int32;
	int32 aa = 5;
	printf("ch is %d\n", aa);
	return 0;
}
