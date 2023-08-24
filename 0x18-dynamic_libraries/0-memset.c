#include "main.h"

/**
 * _memset - Fill first n  pointed to by s with constant byte b.
 * @s: Pointer to memory area to fill.
 * @b: Constant byte to fill memory with.
 * @n: Number of bytes to fill.
 *
 * Return: Pointer to the memory area s.
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i;

	i = 0;
	while (n > 0)
	{
		s[i] = b;
		i++;
		n--;
	}

	return (s);
}
