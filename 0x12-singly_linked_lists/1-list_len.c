#include "lists.h"
#include <stdio.h>
#include <stdio.h>

/**
* list_len - Return number of elements
*
* @h: Points to struct
*
* Return: Num of elements
*/

size_t list_len(const list_t *h)
{
	size_t elements = 0;

	while (h)
	{
		h = h->next;
		count++;
	}
	return (count);
}
