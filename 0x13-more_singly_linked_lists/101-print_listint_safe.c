#include "lists.h"

/**
 * print_listint_safe - prints a listint_t linked list.
 * @head: the head of list
 * Return: the number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	listint_t *slow, *fast;
	size_t i = 0;

	if (!head)
		exit(98);
	slow = (listint_t *)head;
	fast = head->next;
	while (fast != NULL && fast < slow)
	{/*again, with AI help*/
		printf("[%p] %d\n", (void *)slow, slow->n);
		slow = slow->next;
		fast = fast->next;
		i++;
	}
	printf("[%p] %d\n", (void *)slow, slow->n);
	i++;
	if (fast != NULL)
	{
		printf("-> [%p] %d\n", (void *)fast, fast->n);
		i++;
	}

	return (i);
}
