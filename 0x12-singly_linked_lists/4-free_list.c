#include "lists.h"
#include <stdlib.h>

/**
 * free_list - function that frees a list_t list
 * @head: pointer to the the head of the linked list
 */

void free_list(list_t *head)
{
	if (head == NULL)
		return;
	if (head != NULL)
	{
		head = head->next;
		free(head->str);
		free(head);
	}
}
