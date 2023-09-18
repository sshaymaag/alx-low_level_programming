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
	int string;

	for (string = 0; str[string] != '\0'; string++)
	if (string % 2 == 0)
		_putchar(str[string]);
	_putchar('\n');
}
