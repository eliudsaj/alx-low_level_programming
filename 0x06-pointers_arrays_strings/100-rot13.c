#include "main.h"

/**
 * rot13 - encode values using rot13
 * @s: string
 * Return: string `s` rotated
 */

char *rot13(char *s)
{
	char offset, *r = s;

	while (*s)
	{
		offset = (*s & 32) + 65;
		if ((*s >= 'a' && *s <= 'z') || (*s >= 'A' && *s <= 'Z'))
			*s = (*s - offset + 13) % 26 + offset;
		s++;
	}
	return (r);
}
