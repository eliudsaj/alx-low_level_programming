#include "stddef.h"

/**
 * _strstr - Locates the first occurrence of the substring needle
 * in the string haystack.
 * @haystack: Pointer to string to search in
 * @needle: Pointer to substring to search for
 *
 * Return: A pointer to the beginning of the located substring,
 * or NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	int i;

	while (*haystack)
	{
		for (i = 0; needle[i] && haystack[i] && needle[i] == haystack[i]; i++)
			;
		if (!needle[i])
			return (haystack);
		haystack++;
	}
	return (NULL);
}
