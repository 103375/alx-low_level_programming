#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * free_list - free a linked list.
 * @head: head of the linked list to free.
 *
 * Return: nothing.
 */

void free_list(list_t *head)
{
	list_t *phree;

	while (head)
	{
		phree = head;
		head = head->next;
		free(phree->str);
		free(phree);
	}
}
