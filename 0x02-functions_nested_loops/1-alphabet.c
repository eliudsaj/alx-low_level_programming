#include "main.h"
/**
 * print_alphabet - prints the alphabet, in lowercase, followed by a new line
 * Descriptionn - You can only use _putchar twice in your code
 * Return: 0
 */
void print_alphabet(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}
