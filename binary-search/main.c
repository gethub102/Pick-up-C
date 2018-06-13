#include <stdio.h>

int binsearch(int x, int v[], int n);

int main(void) {

	int target, ret;
	int arr[] = {1, 2, 4, 5, 6, 7, 8};

	target = 8;

	ret = binsearch(target, arr, 7);

	printf("ret = %d\n", ret);

	return 0;
}

/* binsearch: find x in v[], length is n, return index of x. (-1) is not found */
int binsearch(int x, int v[], int n) 
{
	int low, high, mid;
	low = 0;
	high = n - 1;
	while (low + 1 < high) {
		mid = low + (high - low) / 2;
		if (x < v[mid]) {
			high = mid;
		} else if (x > v[mid]) {
			low = mid;
		} else {
			return v[mid];
		}
	}
	if (v[low] == x) 
		return low;
	if (v[high] == x) 
		return high;
	return -1;
}