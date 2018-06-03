// gcc -o main main.c -L. -lmoo

// export LD_LIBARAY_PATH=$LD_LIBRARY_PATH: .

// [or] export LD_LIBARAY_PATH= .


/* static one */
// gcc -c moo.c/* to create moo.o */
// ar -cvq libmoo.a moo.o
// nm libmoo.a
// ranlib libmoo.a
// gcc -o main main.c libmoo.a
#include <stdio.h>

int addnumbers(int a, int b);

int main(void) {
	int total;
	total = addnumbers(5, 7);
	printf(" total = %d\n", total);
	return 0;
}