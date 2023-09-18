#include <unistd.h>
#include "main.h"
#include <string.h>
#include <stdio.h>



/**
 * puts2 - updates the value
 * @str: argument
 *
 */
void puts2(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i += 2;
	}
	_putchar('\n');
}
