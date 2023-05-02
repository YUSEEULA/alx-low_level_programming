#include "lists.h"

/**
 * sum_listint - function that return the sum of all data(n) in a linked list
 *
 * @head: the head of the linked list
 *
 * Return: the sum of all data(n) in a linked list
 * return 0 if the list is empty
 */

int sum_listint(listint_t *head)
{
	listint_t *temp;
	int sum = 0;

	if (head == NULL)
		return (0);

	temp = head;

	while (temp != NULL)
	{
		sum = sum + temp->n;
		temp = temp->next;
	}
	return (sum);
}
