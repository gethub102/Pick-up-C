#include <stdio.h>
#include <stdlib.h>


int main(void) {

	int MAX = 10;
	int *a = (int*) malloc(MAX * sizeof(int));
	int *b;

	FILE *fp1;
	FILE *fp2;

	fp1 = fopen("a.txt", "r");
	if (fp1 == NULL) {
		perror("open file a.txt");
		exit(-1);
	}

	fp2 = fopen("b.txt", "w");
	if (fp2 == NULL) {
		perror("open file b.txt");
		fclose(fp1);
		exit(-1);
	}
	int i = 0;
	int j = 0;
	while (fscanf(fp1, "%d", &a[i]) != EOF) {
		i++;
		j++;
		if (i >= MAX) {
			MAX = 2 * MAX;
			b = (int*)realloc(a, MAX * sizeof(int));
			if (b == NULL) {
				perror("realloc memory failed");
				fclose(fp1);
				fclose(fp2);
				exit(-1);
			}
			a = b;
		}
		printf("file a is reading .. \n");
	}

	while (--j >= 0) {
		fprintf(fp2, "%d\n", a[j]);
		printf("file b is writing .. \n");
	}

	fclose(fp1);
	fclose(fp2);
	return 0;
}