#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number
 *
 * @n: the number to find the square root of
 *
 * Return: the square root of the number, or -1 if it does not have a natural
 * square root
 */
int _sqrt_recursion(int n)
{
	return (recurse(n, 1));
}
/**
 * sqrt_helper - recursively finds the square root of a number
 *
 * @n: the number to find the square root of
 * @i: the current guess at the square root
 *
 * Return: the square root of the number, or -1 if it does not have a natural
 * square root
 */
int recurse(int n, int i)
{
	if (n == 0)
		return (0);
	else if (n < 0)
		return (-1);
	else if (n / i == i && (n % i == 0))
		return (i);
	else if (i < n)
		return (recurse(n, i + 1));
	return (-1);
}
