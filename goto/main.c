// goto and lable should be in the same func

#include <stdio.h>


int main(void) {
	int a, b, c;

	for (a = 0; a < 10; a++) {
		for (b = 0; b < 10; b++) {
			for (c = 0; c < 10; c++) {
				if (a == 5 && a == b && b == c) {
					goto QUIT_BIG_LOOP;
				}
			}
		}
	}

	QUIT_BIG_LOOP:

	printf("a = %d, b = %d, c = %d\n", a, b, c);

	/* open files */ 

	/* initialize values */ 

	ERROT_HANDLER:
	/* close file descriptors
		cleanup memories
		rest values
	 */

	return 0;
}