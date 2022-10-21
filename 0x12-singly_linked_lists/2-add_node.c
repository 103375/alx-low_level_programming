#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
  * add_node - a function that adds a new node
  * at the beginning of a list_t list
  * @head: The main linked list
  * @str: The string to add to the node
  *
  * Return: The address of the new list or NULL if it failed
  */

list_t *add_node(list_t **head, const char *str)
{
	list_t *temp;

	if (head != NULL && str != NULL)
	{
		temp = malloc(sizeof(list_t));
		if (temp == NULL)
			return (NULL);

		temp->str = strdup(str);
		temp->len = _strlen(str);
		temp->next = *head;

		*head = temp;
		return (temp);
	}
	return (0);
}
