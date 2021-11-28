#include <stdio.h>
#include "lists.h"

/**
 * print_dlistint - Prints a doubly linkedlist of integers
 *
 * @h: A pointer to the first element of a list
 *
 * Return: The number of element printed
 */
size_t print_dlistint(const dlistint_t *h)
{
	int len = 0;

	if (h != NULL)
		while (h->prev != NULL)
			h = h->prev;
	while (h != NULL)
		printf("%d\n", h->n), ++len, h = h->next;
	return (len);
}
