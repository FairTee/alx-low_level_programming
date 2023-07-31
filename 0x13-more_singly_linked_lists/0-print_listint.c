#include "lists.h"

/**
 * print_listint - prints all elements of a linked list
 * @h: linked list of type listint_t
 * Return: Number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t numx = 0;

	while (h)
	{
		printf("%d\n", h->n);
		numx++;
		h = h->next;
	}
	return (numx);
}
