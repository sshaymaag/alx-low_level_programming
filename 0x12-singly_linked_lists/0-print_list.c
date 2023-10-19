
/**
 * print_list - print list
 * @h : argument
 * Return: Always 0.
 */

size_t print_list(const list_t *h)
{
	list_t *current = h;

	while (current != NULL)
	{
		printf("%d\n", current->val);
		current = current->next;
	}
}
