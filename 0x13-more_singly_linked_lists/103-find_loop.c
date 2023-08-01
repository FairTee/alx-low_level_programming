#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list
 * @head: linked list
 * Return: 0
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *six = head;
	listint_t *five = head;

	if (!head)
		return (NULL);

	while (six && five && five->next)
	{
		five = five->next->next;
		six = six->next;
		if (five == six)
		{
			six = head;

			while (six != five)
			{
				six = six->next;
				five = five->next;
			}
			return (five);
		}
	}
	return (NULL);
}
