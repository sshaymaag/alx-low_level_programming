#include <stdlib.h>
#include <string.h>

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

	s = malloc(sizeof(char) * strlen(str) + 1);

	if (str == NULL)
		return (NULL);
	s = malloc(sizeof(char) * (strlen(str) + 1));
	if (s == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
	{
		s[i] = str[i];
	}
		return (s);
}
