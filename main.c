#include <stdio.h>

int main(void) {

	int i;
	char c;

	char *ptr;
	char s;

	c = 'W';
	i = (int) c;

	printf("i = %d, %c\n", i, i);

	s = 'x';
	ptr = &s;

	i = (int)ptr;

	printf("i = %x\n", i);

	i = 3000;
	c = (char)i;
	printf("c = %d\n", c);
	// printf("c = %d, %c\n", c, c); // int to char will lose 3 bytes

	return 0;
}