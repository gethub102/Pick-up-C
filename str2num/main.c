#include <stdio.h>
#include <stdlib.h>

int main(void) {
	char *strint = "5722";
	char *strdbl = "5722.5722";
	int a;
	double b;

	a = atoi(strint);
	b = atof(strdbl);

	printf("a = %d\n", a);
	printf("b = %f\n", b);
	return 0;
}