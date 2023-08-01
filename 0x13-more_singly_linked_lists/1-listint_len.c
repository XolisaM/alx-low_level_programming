#include "lists.h"

/**
 * listint_len - return number of element linked list
 * @h: linked list of type listint_t to traverse
 *
 * Return: numbers of the nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		num++;
		h = h->next;
	}

	return (num);
}

