#include "lists.h"

/**
 * listint_len - returns the num of elements in a linked list
 * @h: linked list of type listint_t to traverse
 * Return: number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t numx = 0;

		while (h)
		{
			numx++;
			h = h->next;
		}

	return (numx);
}
