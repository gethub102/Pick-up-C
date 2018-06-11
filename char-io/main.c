#include <stdio.h>

int main(void) {
	
	int c = 0;
	printf("EOF = %d\n", EOF);
	while ((c = getchar()) != EOF) 
		putchar(c);


	return 0;
}