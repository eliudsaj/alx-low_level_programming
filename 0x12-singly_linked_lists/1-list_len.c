#include <stddef.h>
#include "lists.h"

/**
 * list_len - Return number  of elements in a linked list
 * @h: the head of a linked list
 * Return: number of elements in  a linked list
 */
size_t list_len(const list_t *h)
{
	size_t length = 0;

	while (h)
	{
		h = h->next;
		length++;
	}
	return (length);
}
