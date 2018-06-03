// gcc -g -o main main.c // -g means add debug simbols
// gdb main
// b 10
// run
// next
// step


#include <stdio.h>

int main(void) {

	char *day[] = {
		"Monday",
		"Tuesday",
		"Wednesday",
		"Thursday",
		"Firday",
		"Saturday",
		"Sunday"
	};

	for (int i = 0; i < 7; i++) {
		printf("day[%d] = %s\n", i, day[i]);
	}

	return 0;
}