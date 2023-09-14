#include "main.h"

/**
 * more_numbers - print numbers
 *
 * Return: 1 if n > 0;
 * 0 if n = 0;
 * -1 if n < 0
 */
void more_numbers(void)
{
	int i;

	for (i = 0; i <= 14; i++)
	{
		if (i > 9)
		{
			_putchar('0' + i / 10);
			_putchar('0' + i % 10);
		}
		else
		{
			_putchar('0' + i);
		}
	}
	_putchar('\n');
}
