#include <stdio.h>

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
        int len1 = 0, len2 = 0, lenS = 0;

        while (*(n1 + len1++))
                ;
        while (*(n2 + len2++))
                ;
        printf("%d, %d\n", len1, len2);
        return (r);
}
