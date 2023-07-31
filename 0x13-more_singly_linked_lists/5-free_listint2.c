#include "lists.h"

/**
 * free_listint2 - frees a kind of linked list
 * @head: ptr to a listint_t **head)
 */

void free_listint2(listint_t **head)
{
	listint_t *txt;

	if (head == NULL)
		return;

	while (*head)
	{
		txt = (*head)->next;
		free(*head);
		*head = txt;
	}

	*head = NULL;
}
