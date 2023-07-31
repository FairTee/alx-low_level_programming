#include "lists.h"

/**
 * pop_listint - deletes the head node
 * @head: ptr to head node
 * Return: data tht was deleted
 */
int pop_listint(listint_t **head)
{
	listint_t *txt;
	int m;

	if (!head || !*head)
		return (0);

	m = (*head)->n;
	txt = (*head)->next;
	free(*head);
	*head = txt;

	return (m);
}
