#include <stdio.h>
#include "lists.h"
/**
 * print_list - print each string of a t list
 * @h: head of linked list
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t length = 0;

	while (h)
	{
		if (h->str)
			printf("[%u] %s\n", h->len, h->str);
		else
			printf("[0] (nil)\n");
		length++;
		h = h->next;
	}
	return (length);
}
