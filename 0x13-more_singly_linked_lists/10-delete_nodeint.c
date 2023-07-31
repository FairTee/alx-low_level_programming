#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a node in a linked list
 * @head: ptr to the first element
 * @index: index
 * Return: 1 as success or -1 as fail
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *txt = *head;
	listint_t *new = NULL;
	unsigned int x = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(txt);
		return (1);
	}

	while (x < index - 1)
	{
		if (!txt || !(txt->next))
			return (-1);
		txt = txt->next;
		x++;
	}

	new = txt->next;
	txt->next = new->next;
	free(new);

	return (1);
}
