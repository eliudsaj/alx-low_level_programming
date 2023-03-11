#include "main.h"
#include <stdio.h>

/**
 * main - prints all command-line arguments, one per line
 * @argc: the number of command-line arguments
 * @argv: an array of strings containing the arguments
 *
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
