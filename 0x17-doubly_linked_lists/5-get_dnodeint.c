#include "lists.h"

/**
 * get_dnodeint_at_index - retrieves the nth node of a linked list
 * @head: head node
 * @index: index of the node to retrieve
 * Return: pointer to the nth node else NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	for (; head && index; index--)
		head = head->next;
	if (index == 0)
		return (head);
	return (NULL);
}
