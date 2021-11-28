#include "lists.h"
#include <stdlib.h>

/**
 * delete_dnodeint_at_index - Delete a node at a specific index from a list
 *
 * @head: A pointer to the first element of a list
 * @index: The index of the node to delete
 *
 * Return: 1 on success, -1 on failure
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *prev = NULL,
		*current = head == NULL ? NULL : *head,
		*next = current == NULL ? NULL : current->next;

	for (; current != NULL && index; --index)
		prev = current, current = next, next = next == NULL ? NULL : next->next;
	if (current == NULL || index)
		return (-1);
	if (prev == NULL)
	{
		if (next != NULL)
			next->prev = NULL;
		return (free(current), *head = next, 1);
	}
	free(current), prev->next = next;
	if (next != NULL)
		next->prev = prev;
	return (1);
}
