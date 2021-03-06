#include <stdio.h>

#define MAXLINE 1000 /* maximum input line length */

int get_line(char line[], int maxline);

void copy(char to[], char from[]);

int main(void) {
	int len, max;
	char line[MAXLINE];
	char longest[MAXLINE];

	max = 0;
	while ((len = get_line(line, MAXLINE)) > 0) 
		if (len > max) {
			max = len;
			copy(longest, line);
		}
	if (max > 0) 
		printf("%s\n", longest);
	return 0;
}


/* getline: read a line into line, return length */
int get_line(char line[], int maxline) {
	int c, i;
	for (i = 0; i < maxline - 1 && (c = getchar()) != EOF && c != '\n'; i++) 
		line[i] = c;
	if (c == '\n') {
		line[i] = c;
		++i;
	}
	line[i] = '\0';
	return i;
}

/* copy: copy 'from' into 'to'; assume to is big enough */
void copy(char to[], char from[]) {
	int i;
	i = 0;
	while ((to[i] = from[i]) != '\0')
		++i;
}