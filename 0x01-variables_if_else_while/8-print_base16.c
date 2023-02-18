#include <stdio.h>
/**
 * main - Entry point
 * Description: Print the alphabet in reverse order in lowercase.
 * Return: 0(success)
 */
int main(void)
{
	char c;

	for (c = 'z'; c >= 'a'; c--)
	{
		putchar(c);
	}
	putchar('\n');

	return (0);
}
