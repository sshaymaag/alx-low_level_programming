#include <stdlib.h>
#include <string.h>

/**
 * str_concat - function that prints a string, followed by a new line
 * @s1: The string to print
 * @s2: The string to print
 *
 * Return: nothing.
 */
char *str_concat(char *s1, char *s2)
{
	char *s;
	unsigned int i;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	s = malloc(sizeof(char) * (strlen(s1) + strlen(s1) + 2));
	if (s == NULL)
	{
		return (NULL);
	}
	for (i = 0; s1[i] != '\0'; i++)
	{
		s[i] = s1[i];
	}
	for (i = 0; s2[i] != '\0'; i++)
	{
		s[i + strlen(s1)] = s2[i];
	}
		return (s);
}
