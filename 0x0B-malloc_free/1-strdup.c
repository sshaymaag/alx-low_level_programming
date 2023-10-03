#include <stdlib.h>
/**
 * _strdup - function that prints a string, followed by a new line
 * @str: The string to print
 *
 * Return: nothing.
 */
char *_strdup(char *str)
{
	char *s;
	unsigned int i;

	if (str == NULL)
		return (NULL);
	s = malloc(sizeof(str));
	for (i = 0; str[i] != '\0'; i++)
		s[i] = str[i];

	free(s);
	return (s);
}
