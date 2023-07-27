#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node - adds a new node at beginning of a linked list
 * @head: double pointer to list_t
 * @str: new string to add
 * Return: address of new element
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *dew;
	unsigned int len = 0;

	while (str[len])
		len++;

	dew = malloc(sizeof(list_t));
	if (!dew)
		return (NULL);

	dew->str = strdup(str);
	dew->len = len;
	dew->next = (*head);
	(*head) = dew;

	return (*head);
}
