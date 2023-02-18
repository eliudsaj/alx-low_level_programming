#include <stdio.h>
/**
 * main - entry point
 * Description: Use `putchar` to print lowercase and then uppercase alphabet.
 * Return: 0(success)
 */
int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}

	c = 'A';

	while (c <= 'Z')
	{
		putchar(c);
		c++;
	}

	putchar('\n');

	return (0);
}
