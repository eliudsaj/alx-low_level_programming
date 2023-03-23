#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - prints strings, separated by a given string
 * @separator: the separator string
 * @n: the number of strings to print
 * @...: the strings to print
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *s;
	va_list params;

	va_start(params, n);
	for (i = 0; i < n; i++)
	{
		s = va_arg(params, char *);
		if (!s)
			s = "(nil)";
		printf("%s", s);
		if (separator && i != n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(params);
}
