#include "main.h"

/**
 * print_square - print numbers
 *
 * Return: 1 if n > 0;
 * 0 if n = 0;
 * -1 if n < 0
 * @size: parameter
 */
void print_square(int size)
{
	int i, j;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (j = 0; j < size; j++)
		{
			for (i = 0; i < size; i++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
