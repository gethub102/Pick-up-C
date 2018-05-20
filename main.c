#include <stdio.h>

int main(void) {
	int a;
	int b = 10;
	float c = 5.5;

	printf("a adress is %u\n", &a);
	printf("b adress is %u\n", &b);
	printf("c adress is %u\n", &c);

	int *p1;
	p1 = &a;

	int *p2 = &b;
	float *p3 = &c;

	printf("p1 value is %u\n", p1);
	printf("p1 value is %d\n", *p1);
	printf("p2 value is %u\n", p2);
	printf("p2 value is %d\n", *p2);
	printf("p3 value is %u\n", p3);
	printf("p3 value is %f\n", *p3);
	return 0;
}
