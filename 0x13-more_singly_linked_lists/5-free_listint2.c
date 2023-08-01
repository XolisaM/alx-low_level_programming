#include "lists.h"

/**
 * free_listint2 - free  link lists
 * @head: point the listint_t lists to free
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
		return;

	while (*head)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}

	*head = NULL;
}

