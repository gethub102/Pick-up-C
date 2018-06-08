#include <stdio.h>
#include <stdlib.h>

int main(void) {

	char *p;
	p = getenv("MYENV");

	printf("p = %s\n", p);
	return 0;
}