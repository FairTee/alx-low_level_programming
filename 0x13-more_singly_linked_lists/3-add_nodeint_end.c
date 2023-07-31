#include "lists.h"

/**
 * add_nodeint_end - adds a node at the end of a linked list
 * @head: ptr to the first element
 * @n: data to insert
 * Return: ptr to new node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *sure;
	listint_t *txt = *head;

	sure = malloc(sizeof(listint_t));
	if (!sure)
		return (NULL);

	sure->n = n;
	sure->next = NULL;

	if (*head == NULL)
	{
		*head = sure;
		return (sure);
	}

	while (txt->next)
		txt = txt->next;

	txt->next = sure;

	return (sure);
}
