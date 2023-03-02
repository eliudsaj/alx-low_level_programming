#include "holberton.h"

/**
 * infinite_add - adds two numbers
 * @n1: first number
 * @n2: second number
 * @r: buffer to store result
 * @size_r: buffer size
 * Return: pointer to result, or 0 if result cannot be stored in r
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int len1, len2, len_res, carry, sum, i, j;

	
	for (len1 = 0; n1[len1] != '\0'; len1++)
		;
	for (len2 = 0; n2[len2] != '\0'; len2++)
		;

	
	if (len1 >= size_r || len2 >= size_r || len1 + 1 >= size_r || len2 + 1 >= size_r)
		return (0);

	
	i = len1 - 1;
	j = len2 - 1;
	carry = 0;
	len_res = 0;
	while (i >= 0 || j >= 0 || carry > 0)
	{
		sum = carry;
		if (i >= 0)
			sum += n1[i--] - '0';
		if (j >= 0)
			sum += n2[j--] - '0';
		r[len_res++] = (sum % 10) + '0';
		carry = sum / 10;
	}

	
	for (i = 0, j = len_res - 1; i < j; i++, j--)
	{
		char temp = r[i];
		r[i] = r[j];
		r[j] = temp;
	}

	r[len_res] = '\0'; 
	return (r);
}
