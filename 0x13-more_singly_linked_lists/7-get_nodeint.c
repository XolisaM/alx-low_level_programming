#include "lists.h"

/**
 * get_nodeint_at_index - return node at certain index in link lists
 * @head: first in link lists
 * @index: index of nodes return
 *
 * Return: point to node we're looking for, or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *temp = head;

	while (temp && i < index)
	{
		temp = temp->next;
		i++;
	}

	return (temp ? temp : NULL);
}
