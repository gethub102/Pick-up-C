#include <stdio.h>
#include <stdlib.h>

int comparefunc(const void* a, const void* b);

int main(void) {
	int nums[] = {5, 2, 5, 7, 8, 1, 9, 11, 12, 8};

	printf("Before sort\n");
	for (int i = 0; i < 10; ++i)
		printf("%d ", nums[i]);
	printf("\n");
	qsort(nums, 10, sizeof(int), comparefunc);

	printf("After sort\n");

	for (int i = 0; i < 10; ++i)
		printf("%d ", nums[i]);
	printf("\n");
	return 0;
}

int comparefunc(const void* a, const void* b) {
	int aa, bb;
	aa = *(int*)a;
	bb = *(int*)b;
	return (aa - bb);
}