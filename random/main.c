#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {

	srand((unsigned int) time(NULL));

	printf("Dice numbers: \n");

	printf("n1 = %d\n", rand() % 6 + 1);
	printf("n2 = %d\n", rand() % 6 + 1);
	printf("n3 = %d\n", rand() % 6 + 1);
	printf("n4 = %d\n", rand() % 6 + 1);
	printf("n5 = %d\n", rand() % 6 + 1);
	printf("n6 = %d\n", rand() % 6 + 1);


	return 0;
}