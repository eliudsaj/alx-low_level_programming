#include <stdio.h>
/**
 * main - entry point
 * Description: Use `putchar` to print all letters but the letter 'q' and 'e'.
 * Return: 0(sucess)
 */
int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		if (c != 'q' && c != 'e')
			putchar(c);
		c++;
	}
	putchar('\n');

	return (0);
}
