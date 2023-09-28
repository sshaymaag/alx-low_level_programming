#include <stdio.h>

/**
 * _strlen_recursion - function that prints a string, followed by a new line
 * @s: The string to print
 *
 * Return: nothing.
 */
int _strlen_recursion(char *s)
{
	int n = 0;

	if (*s)
	{
		n++;
		n += _strlen_recursion(s + 1);
	}
	return (n);
}
