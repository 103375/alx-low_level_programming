#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_list - Print all the elements of a list_t list
 * @h: The list_t list.
 *
 * Return: The number of nodes h.
 */

size_t print_list(const list_t *h)
{
	size_t nodes = 0;

	if (!h)
		return (0);
	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		nodes += 1;
		h = h->next;
	}
	return (nodes);
}
