#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* s: str[], data: data[][], n:  */
int breakfields(char *s, char **data, int n) {
	int fields;
	int i ;
	char *start = s;
	char *end = s;

	for (i = 0; i < n; i++) {
		while (*end != ',' && *end != '\0')
			end++;
		if (*end == '\0') {
			data[i] = (char*)malloc(strlen(start) + 1);
			strcpy(data[i], start);
			fields++;
			break;
		} else if (*end == ',') {
			*end = '\0';
			data[i] = (char*)malloc(strlen(start) + 1);
			strcpy(data[i], start);
			fields++;
			start = end + 1;
			end = start;
		}
	}

	return fields;
}

int main(void) {

	char str[128] = "Steve, 28 Plam St, Honolulu, HI, 94087";
	
	char *data[5];

	int ret;

	int i;

	printf("str = %s\n", str);

	ret = breakfields(str, data, 5);

	for (i = 0; i < 5; i++) {
		printf("data[%d] = %s\n", i, data[i]);
		free(data[i]);
	}

	printf("Number of fields processed = %d\n", ret);

	return 0;
}