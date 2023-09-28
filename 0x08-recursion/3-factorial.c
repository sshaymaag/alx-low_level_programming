#include <stdio.h>

/**
 * factorial - function that prints a string, followed by a new line
 * @n: argument
 *
 * Return: nothing.
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n > 1)
	{
		n *= factorial(n - 1);
	}
	return (n);
}
