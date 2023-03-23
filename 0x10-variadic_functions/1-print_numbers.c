#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - prints numbers, separated by a given string
 * @separator: the separator string
 * @n: the number of integers to print
 * @...: the integers to print
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list params;

	va_start(params, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(params, int));
		if (separator && i != n - 1)
			printf("%s", separator);
	}
	printf("\n");
}
