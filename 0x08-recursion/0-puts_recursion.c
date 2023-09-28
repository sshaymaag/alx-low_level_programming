#include <stdio.h>

/**
 * _puts_recursion - function that prints a string, followed by a new line
 * @s: The string to print
 *
 * Return: nothing.
 */
void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
	putchar(*s);
	s++;
	_puts_recursion(s);
	}
	else
	putchar('\n');
}
