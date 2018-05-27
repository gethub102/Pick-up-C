// compile command is cc main.c addnumbers.c
// run command is ./a.out

#include <stdio.h>
#include "myheader.h"

int main(void) {

	int sum = addnum(2, 5);
	int sum2 = addnumbers(3, 5);
	printf("sum = %d\n", sum);
	printf("sum2 = %d\n", sum2);
	
	return 0;
}