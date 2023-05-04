#include "main.h"
#include <stdio.h>
/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b: pointing to a string of 0 and 1 chars
 *
 * Return: the converted number, or 0 if
 * there is one or more chars in the string b that is not 0 or 1
 * b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int dec = 0;

	for (; b && *b; b++)
	{
		dec *= 2;
		if (*b == '1' || *b == '0')
			dec += *b - '0';
		else
			return (0);
	}
	return (dec);
}
