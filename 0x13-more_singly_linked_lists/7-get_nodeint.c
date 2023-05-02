#include "lists.h"

/**
 * *get_nodeint_at_index - function that returns the nth node
 * @head: head of the linked list
 * @index: is the index of the node, starting at 0
 *
 * Return: NULL if the node does not exist
 * return the nth node of a listint_t linked list
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp;
	unsigned int count = 0;

	temp = head;

	while (temp != NULL)
	{
		if (count == index)
			return (temp);

		temp = temp->next;
		count++;
	}

	return (NULL);
}
