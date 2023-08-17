#include "lists.h"

/**
 * add_dnodeint_end - adds a node to end of a linked list
 * @head: pointer to the head
 * @n: value to be added
 * Return: pointer to the added node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *end;

	new = malloc(sizeof(*new));
	if (!new)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (head && *head)
	{
		end = *head;
		while (end->next)
			end = end->next;
		end->next = new;
		new->prev = end;
	}
	else
	{
		new->prev = NULL;
		*head = new;
	}
	return (new);
}
