#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the opcodes of its own main function
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 on success, 1 if the number of arguments is not correct,
 * 2 if the number of bytes is negative.
 */

int main(int argc, char *argv[])
{
	int n;
	char *fn;

	if (argc != 2)
	{
		puts("Error");
		return (1);
	}
	n = atoi(argv[1]);
	if (n < 0)
	{
		puts("Error");
		return (2);
	}
	fn = (char *)main;
	for (; n > 0; n--, fn++)
	{
		printf("%02x", *fn & 0xff);
		if (n != 1)
			putchar(' ');
	}
	putchar('\n');
	return (0);
}
