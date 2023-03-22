/**
 * int_index - searches for an integer in an array
 * @array: pointer to the array
 * @size: size of the array
 * @cmp: pointer to the function used to compare values
 *
 * Return: index of the first element for which cmp function does not return 0,
 * or -1 if no element matches or if size is less than or equal to 0.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp && size > 0)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]))
				return (i);
		}
	}
	return (-1);
}
