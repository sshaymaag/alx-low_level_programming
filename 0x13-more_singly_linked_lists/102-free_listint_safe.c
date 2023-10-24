#include "lists.h"
#include <stddef.h>

/**
 * free_listint_safe - free a listint_t linked list safely
 * @h: pointer to a pointer to the head of the list
 * Return: the size of the list that was freed
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *current = *h;
	size_t size = 0;
	listint_t *next = NULL;

	while (current != NULL)
	{
		size++;
		next = current->next;
		free(current);
		current = next;
	}

	*h = NULL;
	return (size);
}
