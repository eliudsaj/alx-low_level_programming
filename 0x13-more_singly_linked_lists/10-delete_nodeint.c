#include <stdlib.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index of a listint_t list
 * @head: pointer to the head of the list
 * @index: index of the node to be deleted
 *
 * Return: 1 if succeeded, -1 otherwise
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *prev = *head;
	listint_t *delete = NULL;
	unsigned int i;

	if (!(*head))
		return (-1);

	for (i = 1; i < index; i++)
	{
		if (prev->next)
			prev = prev->next;
		else
			return (-1);
	}

	if (index == 0)
	{
		delete = prev;
		*head = (*head)->next;
	}
	else
	{
		delete = prev->next;
		prev->next = delete->next;
	}
	free(delete);
	return (1);
}
