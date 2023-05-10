#include "lists.h"
#include <stdlib.h>

/**
 * *insert_nodeint_at_index - function that inserts a new node
 * at a given position
 * @head: the head of the linked list
 * @idx: is the index of the list where the new node should be added
 * @n: data of the new node
 *
 * Return: the address of the new node, or NULL if it failed
 *
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node;
	listint_t *temp = *head;
	unsigned int position = 0;

	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);

	if (*head == NULL || idx == 0)
	{	new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	while (temp != NULL && position < (idx - 1))
	{
		temp = temp->next;
		position++;
	}

	if (temp == NULL || temp->next == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = temp->next;
	temp->next = new_node;

	return (new_node);
}
