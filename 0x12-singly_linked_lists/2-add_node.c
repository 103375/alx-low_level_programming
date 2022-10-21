#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - Add new node to a linked list.
 * @head: head of the linked list.
 * @str: string to add.
 *
 *
 * Return: pointer of the new element added to linked list.
 */

list_t *add_node(list_t **head, const char *str)
{
	int i;
	list_t *new;

	if (!(head && str))
		return (NULL);
	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);
	for (i = 0; str[i]; i++)
	{}
	new->str = strdup(str);
	if (!(new->str))
	{
		free(new);
		return (NULL);
	}
	new->len = i;
	new->next = *head;
	*head = new;

	return (new);
}
