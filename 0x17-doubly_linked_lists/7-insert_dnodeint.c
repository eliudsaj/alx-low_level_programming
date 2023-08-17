#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: head of the linked list
 * @idx: index to insert the new node
 * @n: value to hold the new node
 * Return: pointer to the new node else NULL
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *prev, *new;

	new = malloc(sizeof(*new));
	if (!new)
		return (NULL);
	new->n = n;
	if (idx == 0)
	{
		new->next = *h;
		new->prev = NULL;
		if (new->next)
			new->next->prev = new;
		*h = new;
		return (new);
	}
	for (prev = *h; prev && idx > 1; idx--)
		prev = prev->next;
	if (idx == 1)
	{
		new->next = prev->next;
		new->prev = prev;
		prev->next = new;
		if (new->next)
			new->next->prev = new;
		return (new);
	}
	return (NULL);
}
