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
	int num;
	listint_t *hold;

	if (*head == NULL)
		return (0);

	hold = *head;
	num = hold->n;
	*head = hold->next;
	free(hold);

	return (num);
}
