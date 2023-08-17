#include "lists.h"

/**
 * print_dlistint - prints all elements of a linked list
 * @h: the head
 * Return: Returns the number of nodes printed
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;

	while (h)
	{
		printf("%i\n", h->n);
		count++;
		h = h->next;
	}
	return (count);
}
