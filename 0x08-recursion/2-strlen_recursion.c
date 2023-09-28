#include <stdio.h>

/**
 * _strlen_recursion - function that prints a string, followed by a new line
 * @s: The string to print
 *
 * Return: nothing.
 */
int _strlen_recursion(char *s)
{
	int i = 0;

	while (*s != '\0')
	{
		i++;
		s++;
	}
	return (i);
}
