#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_dnodeint_end - Add a node at the end of a list
 *
 * @head: The address of the pointer to the first element of the list
 * @n: The number to store in the new element
 *
 * Return: A pointer to the new element
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *current, *node = malloc(sizeof(dlistint_t) * 1);

	if (head == NULL || node == NULL)
		return (free(node), NULL);
	node->n = n, node->prev = NULL, node->next = NULL;
	if (*head == NULL)
		return (*head = node);
	current = *head;
	while (current->next != NULL)
		current = current->next;
	current->next = node, node->prev = current;
	return (node);
}
