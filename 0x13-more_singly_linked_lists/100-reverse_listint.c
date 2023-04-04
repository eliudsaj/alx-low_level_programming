#include <stdlib.h>
#include "lists.h"

/**
 * reverse_listint - Reverses a listint_t linked list.
 *
 * @head: A pointer to the head of the listint_t list.
 *
 * Return: A pointer to the first node of the reversed list.
 *         If head is NULL or the list is empty, returns NULL.
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL;
	listint_t *next;

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = next;
	}
	*head = prev;
	return (*head);
}
