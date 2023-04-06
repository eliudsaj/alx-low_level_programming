#include "main.h"
#include <stdio.h>

/**
 * flip_bits - flip bits from one number to another
 * @n: first number
 * @m: second number
 * Return: number of bits to flip
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int diff = n ^ m;
	int count;


	counter = 0;

	while (diff)
	{
		count++;
		diff &= (diff - 1);
	}

	return (count);
}
