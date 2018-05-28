#include <stdio.h>
#include <stdbool.h>
#include <stdint.h>
#include <string.h>

typedef uint32_t int32;

bool isPowOfTwo(int num);
int32 countSetBits(int n);
void swap(int* a, int*b);
bool allBitSets(unsigned int n);
bool bitsAreInAltOrder(unsigned int n);

int main(void) {

	int a = 0x01;
	printf("a = %0x\n", a);

	int b = a<<3;
	printf("a = %0x\n", b);

	int c = a<<1;
	printf("a = %0x\n", c);

	const char* str = "helloo";
	printf("sizeof str = %lu\n", sizeof(str));
	printf("len str = %lu\n", strlen(str));

	const char* strIII = "hellooooooooo";
	printf("sizeof strIII = %lu\n", sizeof(strIII));
	printf("len strIII = %lu\n", strlen(strIII));

	char strII[] = "hello";
	printf("sizeof strII = %lu\n", sizeof(strII));
	printf("len strII = %lu\n", strlen(strII));

	
	return 0;
}

/*
If we subtract a power of 2 numbers by 1 then all unset bits after t
he only set bit become set; and the set bit become unset.

For example for 4 ( 100) and 16(10000), we get following after 
subtracting 1
	3 –> 011
	15 –> 01111
*/

bool isPowOfTwo (int num) {
	return num && (!(num & (num - 1)));
}


/* 
  All power of two numbers have only one bit set. 
  So count the no. of set bits and if you get 1 then 
  number is a power of 2. 
 */


 int32 countSetBits(int n) {
 	int32 count = 0;
 	while(n) {
 		count += n & 1;
 		n >>= 1;
 	}
 	return count;
 }

 void swap(int* a, int*b) {
 	if (a == b || *a == *b) {
 		return;
 	}
 	*a = *a ^ *b;
 	*b = *a ^ *b;
 	*a = *a ^ *b;
 }

 bool allBitSets(unsigned int n) {
 	if ((n & (n + 1)) == 0) 
 		return true;
 	else 
 		return false;
 }

 bool bitsAreInAltOrder(unsigned int n) {
 	n ^= n>>1;
 	return allBitSets(n);
 }