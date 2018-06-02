#include <stdio.h>

int main(void) {

	int a[10] = {6, 2, 4, 5, 1, 9, 4, 3, 2, 7};
	int i, j, tmp;

	for (i = 9; i > 0; i-- ) {
		for (j = 0; j < i; j++) {
			if (a[j] > a[j + 1]) {
				tmp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = tmp;
			}
		}
	}

	for (i = 0; i < 10; i++) {
		printf("%d ", a[i]);
	}
	printf("\n");
	return 0;
}