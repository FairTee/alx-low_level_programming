#include "lists.h"

/**
 * reverse_listint - reverses a linked list
 * @head: ptr to the head node
 * Return: points to the head
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *old = NULL;
	listint_t *next = NULL;

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = old;
		old = *head;
		*head = next;
	}

	*head = old;

	return (*head);
}
