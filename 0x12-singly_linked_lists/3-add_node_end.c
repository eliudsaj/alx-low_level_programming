#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - Add a new node at the end of a list_t list
 * @head: Pointer to a pointer to the head node of the list
 * @str: String to be duplicated and stored in the new node
 *
 * Return: Address of the new node, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *end;
	unsigned int i = 0;

	new_node = malloc(sizeof(list_t));
	if (!new_node)
		return (NULL);
	for (; str && str[i]; i++)
		;
	if (*head)
	{
		end = *head;
		while (end->next)
			end = end->next;
		end->next = new_node;
	}
	else
		*head = new_node;
	new_node->str = (str) ? strdup(str) : NULL;
	new_node->len = i;
	new_node->next = NULL;
	return (new_node);
}
