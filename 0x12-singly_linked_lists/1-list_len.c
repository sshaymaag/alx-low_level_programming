#include "lists.h"

/**
 * list_len - print list
 * @h : argument
 * Return: Always 0.
 */

size_t list_len(const list_t *h)
{
	const list_t *current = h;
	int n = 0;

	while (current)
	{
		n++;
		current = current->next;
	}
	return (n);
}
