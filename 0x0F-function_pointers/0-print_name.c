#include "function_pointers.h"
/**
 * print_name - prints a name
 * @name: pointer to the name to be printed
 * @f: pointer to the function that prints the name
 *
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
