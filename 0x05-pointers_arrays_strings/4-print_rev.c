#include <unistd.h>
#include "main.h"

/**
 * print_rev - updates the value
 * @s: argument
 *
 */
void print_rev(char *s)
{
	int len;

	len = 0;
	while (s[len])
	{
		len++;
	}
	while (len > 0)
	{
		len--;
		_putchar(s[len]);
	}
	_putchar ('\n');
}
