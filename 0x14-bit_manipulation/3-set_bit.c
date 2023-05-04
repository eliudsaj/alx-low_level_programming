/**
 * set_bit - set the bit at an index to 1
 * @n: pointer to number to modify
 * @index: index to set
 * Return: 1 if successful, -1 unsuccessful
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int bits;

	if (index > 64)
		return (-1);

	for (bits = 1; index > 0; index--, bits *= 2)
		;
	*n += bits;

	return (1);
}
