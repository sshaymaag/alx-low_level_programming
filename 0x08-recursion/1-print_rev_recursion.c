#include <stdio.h>

/**
 * _print_rev_recursion - function that prints a string, followed by a new line
 * @s: The string to print
 *
 * Return: nothing.
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
	_print_rev_recursion(s + 1);
	putchar(*s);
	}
}
