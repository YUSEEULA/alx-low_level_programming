#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - function that deletes the head node of a listint_t
 * linked list, and returns the head node’s data (n)
 *
 * @head: pointer to the linked list listint_t
 *
 * Return: return 0 if the linked list is empty
 * return the data of the head node that was deleted
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int data;

	if (*head == NULL)
		return (0);

	temp = *head;
	data = temp->n;

	*head = (*head)->next;
	free(temp);
	temp = NULL;

	return (data);
}
