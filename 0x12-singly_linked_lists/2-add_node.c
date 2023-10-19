#include "lists.h"

/**
 * add_node - print list
 * @head : argument
 * @str : argument
 * Return: Always 0.
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	size_t n = 0;

	new_node = (list_t *) malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	while (str[n])
		n++;

	new_node->str = str;
	new_node->len = n;
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}
