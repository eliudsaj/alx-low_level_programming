#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @str: pointer to the string to capitalize
 * Return: pointer to the capitalized string  `str`
 */

char *cap_string(char *str)
{
	int i, c;
	int is_word_start;
	char nots[] = ",;.!?(){}\n\t\" ";

	for (i = 0, is_word_start = 0; str[i] != '\0'; i++)
	{
		if (str[0] > 96 && str[0] < 123)
			is_word_start = 1;
		for (c = 0; nots[c] != '\0'; c++)
		{
			if (nots[c] == str[i])
				is_word_start = 1;
		}

		if (is_word_start)
		{
			if (str[i] > 96 && str[i] < 123)
			{
				str[i] -= 32;
				is_word_start = 0;
			}
			else if (str[i] > 64 && str[i] < 91)
				is_word_start = 0;
			else if (str[i] > 47 && str[i] < 58)
				is_word_start = 0;
		}
	}
	return (str);
}
