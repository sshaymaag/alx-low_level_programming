#include "main.h"

/**
 * print_diagonal - print numbers
 *
 * Return: 1 if n > 0;
 * 0 if n = 0;
 * -1 if n < 0
 * @n : parameter
 */
void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (j = 0; j < n; j++)
		{
			for (i = 0; i < j; i++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
