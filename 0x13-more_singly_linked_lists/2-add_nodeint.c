#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning
 * @head: ptr to the first node
 * @n: data to insert
 * Return: ptr to the new node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *sure;
	
	sure = malloc(sizeof(listint_t));
	
	if (!sure)
		return (NULL);

	sure->n = n;
	sure->next = *head;
	*head = sure;

	return (sure);
}
