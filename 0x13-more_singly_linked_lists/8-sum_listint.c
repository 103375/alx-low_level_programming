#include "lists.h"

/**
 * sum_listint - Sum of all data (n)
 *
 * @head: Head of node
 *
 *
 * Return: void
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp = head;

	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}

