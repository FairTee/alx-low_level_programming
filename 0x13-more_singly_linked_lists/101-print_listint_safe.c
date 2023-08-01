#include "lists.h"
#include <stdio.h>

size_t looped_listint_len(const listint_t *head);
size_t print_listint_safe(const listint_t *head);

/**
 * looped_listint_len - counts the num of unique nodes
 * @head: ptr to the head
 * Return: 0
 */
size_t looped_listint_len(const listint_t *head)
{
	const listint_t *x, *y;
	size_t n = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	x = head->next;
	y = (head->next)->next;

	while (y)
	{
		if (x == y)
		{
			x = head;
			while (x != y)
			{
				n++;
				x = x->next;
				y = y->next;
			}

			x = x->next;

			while (x != y)
			{
				n++;
				x = x->next;
			}

			return (n);
		}
		x = x->next;
		y = (y->next)->next;
	}
	return (0);
}

/**
 * print_listint_safe - prints a listint_t list
 * @head: ptr to head
 * Return: The number of nodes
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t new, index = 0;

	new = looped_listint_len(head);

	if (new == 0)
	{
		for (; head != NULL; new++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}
	else
	{
		for (index = 0; index < new; index++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}

		printf("-> [%p] %d\nn", (void *)head, head->n);
	}
	return (new);
}
