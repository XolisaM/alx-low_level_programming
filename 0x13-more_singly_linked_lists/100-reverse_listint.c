#include "lists.h"

/**
 * reverse_listint - reverse link lists
 * @head: point the first nodes in lists
 *
 * Return: point the first nodes in new lists
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL;
	listint_t *next = NULL;

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = next;
	}

	*head = prev;

	return (*head);
}
