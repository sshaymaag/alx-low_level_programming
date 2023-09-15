#include "main.h"

/**
 * print_triangle - print numbers
 *
 * Return: 1 if n > 0;
 * 0 if n = 0;
 * -1 if n < 0
 * @size: parameter
 */
void print_triangle(int size)
{
	int i, m, n;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 1; i <= size; i++)
		{
				for (m = size; m > i; m--)
				{
					_putchar(' ');
				}
				for (n = 0; n < i; n++)
				{
					_putchar('#');
				}
				_putchar('\n');
		}
		_putchar('\n');
	}
}
