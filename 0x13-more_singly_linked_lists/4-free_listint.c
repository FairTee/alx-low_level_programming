#include "lists.h"

/**
 * free_listint - frees a linked
 * @head: listint_t list
 */
void free_listint(listint_t *head)
{
	listint_t *txt;

	while (head)
	{
		txt = head->next;
		free(head);
		head = txt;
	}
}
