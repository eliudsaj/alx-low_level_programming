#include "main.h"
#include <stdio.h>

/**
 * main - prints the name of the program
 * @argc: the number of command-line arguments
 * @argv: an array of strings containing the arguments
 *
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
	(void) argc;

	printf("%s\n", argv[0]);

	return (0);
}
