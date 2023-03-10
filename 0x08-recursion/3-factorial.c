#include "main.h"

/**
 * factorial - computes the factorial of a given number
 * @n: integer input
 *
 * Return: factorial of n, or -1 if n is negative
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n < 2)
		return (n);
	else
		return (n * factorial(n - 1));
}
