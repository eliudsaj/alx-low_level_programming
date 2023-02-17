#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - code to check the last digit of a number
 * Descriprion: Print statements based on the last digit of the random number.
 * Return: 0 (always)
 */
int main(void)
{
	int n;
	int a;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	a = n % 10;
if (n > 5)

	printf("Last digit of %d is %d and is greater than 5\n", n, a);
else if (a == 0)

	printf("Last digit of %d is %d and is 0\n", n, a);
	else
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, a);

	return (0);
}
