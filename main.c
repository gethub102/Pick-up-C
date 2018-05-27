// gcc -E -c main.c // show preprocessor

// #include <stdio.h>

#define NUM1 5
#define NUM2 8
#define SUM(x, y) (x) + (y)

// #define ADD

int main(void) {

	int i, k, sum;

	i = NUM1;
	k = NUM2;

	sum = SUM(i, k);

#ifdef ADD
	sum = i + k;

#else
	sum = 1 + k + 10;

#endif
	return 0;

}