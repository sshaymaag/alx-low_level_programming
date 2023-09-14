#include "main.h"

/**
 * print_numbers - print numbers
 *
 * Return: 1 if n > 0;
 * 0 if n = 0;
 * -1 if n < 0
 */
void print_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		_putchar('0' + i);
	}
	_putchar('\n');
}
