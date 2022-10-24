#include "lists.h"

/**
 *  print_listint - Prints elements of a list
 *
 *  @h: const struct listint_t
 *
 *  Return:x size_t
 */

size_t print_listint(const listint_t *h)
{
	int = 0;

	while (h != NULL)
	{
		printf("%i\n", h->n);
		h = h->next;
		i++;
	}
	return (i);
}
