#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * add_node_end - adds a new a node at the end
 * @head: double pointer
 * @str: string to be put in new node
 * Return: The address of the new element
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *dew;
	list_t *tem = *head;
	unsigned int len = 0;

	while (str[len])
		len++;

	dew = malloc(sizeof(list_t));
	if (!dew)
		return (NULL);

	dew->str = strdup(str);
	dew->len = len;
	dew->next = NULL;

	if (*head == NULL)
	{
		*head = dew;
		return (dew);
	}

	while (tem->next)
		tem = tem->next;

	tem->next = dew;

	return (dew);
}
