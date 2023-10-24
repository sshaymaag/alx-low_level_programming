#include "lists.h"

/**
 * get_nodeint_at_index - remove and return the node at a given index
 * @head: pointer to the head of the list
 * @index: the index of the node to remove
 * Return: pointer to the removed node or NULL if not found
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;
	listint_t *current, *previous;

	current = head;
	previous = NULL;

	for (i = 0; i < index && current != NULL; i++)
	{
		previous = current;
		current = current->next;
	}

	if (current == NULL)
		return (NULL);

	if (previous == NULL)
		head = current->next;
	else
		previous->next = current->next;

	current->next = NULL;

	return (current);
}
