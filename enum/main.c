#include <stdio.h>

enum day {
	Sunday,
	Monday,
	Tuesday = 0,
	Wednesday,
	Thursday,
	Friday,
	Saturday
};

int main(void) {
	enum day myday;

	printf("Sunday = %d\n", Sunday);
	printf("Monday = %d\n", Monday);
	printf("\n");

	myday = Wednesday;
	printf("myday = %d\n", myday);


	return 0;
}