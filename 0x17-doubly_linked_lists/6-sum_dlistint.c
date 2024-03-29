#include "lists.h"

/**
 * sum_dlistint - sums all the data (n) of a dlistint_t linked list.
 * @head: our list
 * Return: the sum or 0 if empty
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
