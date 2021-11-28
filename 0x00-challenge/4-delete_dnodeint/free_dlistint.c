#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_dlistint - Free a list
 *
 * @head: A pointer to the first element of the list
 */
void free_dlistint(dlistint_t *head)
{
	void *tmp = NULL;

	if (head != NULL)
		while (head->prev != NULL)
			head = head->prev;
	while (head != NULL)
		tmp = head, head = head->next, free(tmp);
}
