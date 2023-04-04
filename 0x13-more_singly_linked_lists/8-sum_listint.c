#include "lists.h"

/**
 * sum_listint - Computes the of all the data
 * @head: Pointer to the head
 *
 * Return: The sum of all  data (n) in the list, or 0 if empty
 */

int sum_listint(listint_t *head)
{
	int sum;
	listint_t *current;

	for (sum = 0, current = head; current != NULL; current = current->next)
		sum += current->n;

	return (sum);
}
