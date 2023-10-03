#include <stdlib.h>
/**
 * create_array - function that prints a string, followed by a new line
 * @size: The string to print
 * @c: The string to print
 *
 * Return: nothing.
 */
char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	str = malloc(sizeof(char) * size);
	if (size == 0 || str == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		str[i] = c;
	return (str);
}
