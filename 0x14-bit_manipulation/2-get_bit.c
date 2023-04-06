/**
 * get_bit - returns the value of a bit at a given index
 * @n: number to check the bit from
 * @index: index of the bit to check
 *
 * Return: value of the bit at index index, or -1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int bits = sizeof(int) * 8, bit = 1;

	if (index >= bits)
		return (-1);
	return ((bit << index & n) ? 1 : 0);
}
