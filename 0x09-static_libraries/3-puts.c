#include "main.h"
/**
 * _puts - updates the value
 * @str: argument
 *
 */
void _puts(char *str)
{
	int len;

	len = 0;
	while (str[len])
	{
		_putchar(str[len]);
		len++;
	}
	_putchar ('\n');
}
