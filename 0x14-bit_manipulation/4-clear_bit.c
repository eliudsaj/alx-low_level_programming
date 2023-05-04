#include "main.h"
#include <stdio.h>
/**
 * clear_bit - sets value of a bit to 0 at a given index
 * @n: decimal number passed by pointer
 * @index: index position to change, starting from 0
 * Return: 1 on success, -1 if error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int i;
	unsigned int mask;

	if (index > 64)
		return (-1);
	mask = index;
	for (i = 1; mask > 0; i *= 2, mask--)
		;

	if ((*n >> index) & 1)
		*n -= i;

	return (1);
}
