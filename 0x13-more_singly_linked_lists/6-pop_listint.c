#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list,
 * and returns the head node's data (n).
 * @head: a pointer to a pointer to the first node of the list
 * Return: the head node's data (n), or 0 if the list is empty
 */

int pop_listint(listint_t **head)
{
	listint_t *node;
	int n;

	if (!(*head))
		return (0);
	n = (*head)->n;
	node = *head;
	*head = (*head)->next;
	free(node);
	return (n);

