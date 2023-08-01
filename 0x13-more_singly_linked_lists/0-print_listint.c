#include "lists.h"

/**
 * print_listint - print the element linked lists
 * @h: list of types listint_t to prints
 *
 * Return: numbers of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		printf("%d\n", h->n);
		num++;
		h = h->next;
	}

	return (num);
}
