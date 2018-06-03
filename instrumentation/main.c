// gcc -o main mian.c

// gcc -DINSTDEBUG -o main main.c

#include <stdio.h>

int addnum(int a, int b) {
	int sum;
#ifdef INSTDEBUG
	printf("Debug: Entering addnum %s %d\n", __FILE__, __LINE__);
	printf("Debug: a = %d\n", a);
	printf("Debug: b = %d\n", b);
#endif
	sum = a + b;

#ifdef INSTDEBUG
	printf("Debug: sum = %d\n", sum);
	printf("Debug: Leaving addnum %s %d\n", __FILE__, __LINE__);
#endif
	return sum;
}

int main(void) {
	int total;
	int x, y;
	x = 4, y = 7;
	total = addnum(x, y);
	printf("total = %d\n", total);
	return 0;
}