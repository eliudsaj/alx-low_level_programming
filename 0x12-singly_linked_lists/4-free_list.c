#include <stdlib.h>
#include "lists.h"

/**
 * free_list - Frees a list_t list
 * @head: Pointer to the head node of the list
 */
void free_list(list_t *head)
{
	if (head)
	{
		free_list(head->next);
		free(head->str);
	}
	free(head);
	head = NULL;
}
