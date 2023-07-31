#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node
 * @head: ptr to head node
 * @idx: index
 * @n: data to insert
 * Return: ptr to new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int x;
	listint_t *sure;
	listint_t *txt = *head;

	sure = malloc(sizeof(listint_t));
	if (!sure || !head)
		return (NULL);

	sure->n = n;
	sure->next = NULL;

	if (idx == 0)
	{
		sure->next = *head;
		*head = sure;
		return (sure);
	}

	for (x = 0; txt && x < idx; x++)
	{
		if (x == idx - 1)
		{
			sure->next = txt->next;
			txt->next = sure;
			return (sure);
		}
		else
			txt = txt->next;
	}

	return (NULL);
}

