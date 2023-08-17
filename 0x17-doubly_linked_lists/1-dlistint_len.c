#include "lists.h"

/**
 * dlistint_len - finds numer of nodes in a linked list
 * @h: head of the linked list
 * Return: length
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t length = 0;

	while (h)
	{
		length++;
		h = h->next;
	}
	return (length);
}
