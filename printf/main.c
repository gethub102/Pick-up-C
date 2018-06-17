#include <stdio.h>
#include <stdarg.h>

/* minprintf: minimal printf with variable argument list */
void minprintf(char *fmt, ...);

int main(void)
{
	char *str = "this is a string";
	minprintf("test %s\n", str);
	return 0;
}

void minprintf(char *fmt, ...)
{
	va_list ap;
	char *p, *sval;
	int ival;
	double dval;

	va_start(ap, fmt); /* make ap point to the first unnamed arg */
	for (p = fmt; *p; p++) {
		if (*p != '%') {
			putchar(*p);
			continue;
		}
		switch(*++p) {
			case 'd':
				ival = va_arg(ap, int);
				printf("%d\n", ival);
				break;
			case 'f':
				dval = va_arg(ap, double);
				printf("%f\n", dval);
				break;
			case 's':
				for (sval = va_arg(ap, char *); *sval; sval++) 
					putchar(*sval);
				break;
			default: 
				putchar(*p);
				break;
		}
		va_end(ap);
	}
}