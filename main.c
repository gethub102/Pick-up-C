#include <stdio.h>

int addnumbers(int a, int b);
int main(void) {
	int total = 0;
	total = addnumbers(2, 3);
	printf("total is %d\n", total);
	return 0;
}
