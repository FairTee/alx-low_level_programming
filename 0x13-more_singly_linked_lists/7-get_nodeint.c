#include "lists.h"

/**
 * get_nodeint_at_index - returns the node at a certain index
 * @head: first node
 * @index: index of the node
 * Return: ptr to node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int x = 0;
	listint_t *txt = head;

	while (txt && x < index)
	{
		txt = txt->next;
		x++;
	}

	return (txt ? txt : NULL);
}
