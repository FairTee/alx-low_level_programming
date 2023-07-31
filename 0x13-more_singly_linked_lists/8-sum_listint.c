#include "lists.h"

/**
 * sum_listint - calculates the sum of all the data
 * @head: first node
 * Return: sumation
 */
int sum_listint(listint_t *head)
{
	int total = 0;
	listint_t *txt = head;

	while (txt)
	{
		total += txt->n;
		txt = txt->next;
	}

	return (total);
}
