#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - prints a variable list of arguments
 * @format: a string of format characters indicating the types of arguments
 *          'c' for char
 *          'i' for int
 *          'f' for float
 *          's' for string (char *)
 *          any other character is ignored
 *          the order of the format characters is the order of the arguments
 *          if the string is NULL, "(nil)" is printed instead
 */

void print_all(const char * const format, ...)
{
	unsigned int i = 0;
	va_list params;
	char *s, *sep = "";

	if (format)
	{
		va_start(params, format);
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", sep, va_arg(params, int));
					break;
				case 'i':
					printf("%s%d", sep, va_arg(params, int));
					break;
				case 'f':
					printf("%s%f", sep, va_arg(params, double));
					break;
				case 's':
					s = va_arg(params, char *);
					if (!s)
						s = "(nil)";
					printf("%s%s", sep, s);
					break;
				default:
					i++;
					continue;
			}
			sep = ", ";
			i++;
		}
		va_end(params);
	}
	printf("\n");
}
