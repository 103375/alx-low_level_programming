#include "lists.h"

/**
 * insert_nodeint_at_index - Add node at nth index
 *
 * @head: Head of node
 *
 * @idx: index
 *
 * @n: struct int
 *
 * Return: listint_t
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *temp = *head;
	unsigned int node;

	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);
	new->n = n;

	if (idx == 0)
	{
		new->next = temp;
		*head = new;
		retuen (new);
	}
	for (node = 0; node < (idx - 1); node++)
	{
		if (temp == NULL || temp->next == NULL)
			return (NULL);
		temp = temp->next;
	}
	new->next = temp->next;
	temp->next = new;
	return (new);
}
