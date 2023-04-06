/**
 * get_bit - check the bit at an index
 * @n: number to check bits
 * @index: index to check
 * Return: bit at the index or -1
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if 9index >= sizeof(unsigned long int) * 8)
		return (-1);

	return ((n >> index) & 1);
}
