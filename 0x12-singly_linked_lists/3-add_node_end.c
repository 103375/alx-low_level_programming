#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - Add new node in the end of the linked list.
 * @head: head of the linked list.
 * @str: string to add.
 *
 * Return: pointer of the new node added to linked list.
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newNode, *last;
	unsigned int i;

	if (!(head && str))
		return (NULL);

	newNode = malloc(sizeof(list_t));
	if (!newNode)
		return (NULL);

	newNode->str = strdup(str);
	for (i = 0; str[i]; i++)
	{}
	newNode->len = i;
	newNode->next = NULL;

	if (!*head)
	{
		*head = newNode;
		return (newNode);
	}
	last = *head;
	while (last->next)
	{
		last = last->next;
	}
	last->next = newNode;
	return (newNode);
}
