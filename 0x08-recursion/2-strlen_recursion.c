#include "main.h"
/**
 * _strlen_recursion - returns the length of a string
 * @s: the string to find the length of
 *
 * Return: the length of the string
 */
int _strlen_recursion(char *s)
{
	int c;

	c = 0;
	if (*s == '\0')
		return (0);

	c = 1 +  _strlen_recursion(s + 1);

	return (c);
}
