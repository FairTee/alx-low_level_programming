#include "lists.h"

/**
 * free_listint_safe - frees a linked list
 * @h: ptr to the head
 * Return: num of elements in the freed list
 */
size_t free_listint_safe(listint_t **h)
{
	size_t liv = 0;
	int dix;
	listint_t *txt;

	if (!h || !*h)
		return (0);
	while (*h)
	{
		dix = *h - (*h)->next;
		if (dix > 0)
		{
			txt = (*h)->next;
			free(*h);
			*h = txt;
			liv++;
		}
		else
		{
			free(*h);
			*h = NULL;
			liv++;
			break;
		}
	}

	*h = NULL;

	return (liv);
}
