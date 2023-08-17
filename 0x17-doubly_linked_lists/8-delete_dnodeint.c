#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes node at an inex in a linked list
 * @head: head of a linked list
 * @index: index of the node to be deleted
 * Return: 1 on success, 0 on an error
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *node;

	node = *head;

	if (index == 0 && node)
	{
		*head = node->next;
		if (*head)
			(*head)->prev = NULL;
		free(node);
		return (1);
	}
	for (; node && index > 0; index--)
		node = node->next;
	if (index == 0 && node)
	{
		node->prev->next = node->next;
		if (node->next)
			node->next->prev = node->prev;
		free(node);
		return (1);
	}
	return (-1);
}
