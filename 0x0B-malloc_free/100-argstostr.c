#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments of the program
 *
 * @ac: the number of arguments
 * @av: the arguments
 *
 * Return: On success, returns a pointer to the concatenated string.
 * Returns NULL on failure.
 */

char *argstostr(int ac, char **av)
{
	int r, c, i = 0, len = 0;
	char *p;

	if (ac <= 0 || av == NULL)
		return (NULL);
	for (r = 0; r < ac; r++)
	{
		for (c = 0; av[r][c]; c++)
			;
		len += c + 1;
	}
	p = malloc(len + 1);
	if (p != NULL)
	{
		for (r = 0; r < ac; r++)
		{
			for (c = 0; av[r][c]; c++, i++)
				p[i] = av[r][c];
			p[i++] = '\n';
		}
		p[i] = '\0';
	}
	return (p);
}
