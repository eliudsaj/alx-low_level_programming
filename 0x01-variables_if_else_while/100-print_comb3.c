#include <stdio.h>
/**
 * main - Entry point
 * Description: Print numbers from 0 to 99.
 * Numbers must be separated by commas followed by a space.
 * Return: 0(success)
 */
int main(void)
{
	int i, j, k;

	for (i = 0; i < 100; i++)
	{
		j = i / 10;
		k = i % 10;

		putchar(j + '0');
		putchar(k + '0');

		if (i < 99)
		{
			putchar(44);
			putchar(32);
		}
	}
	putchar('\n');

	return (0);
}
