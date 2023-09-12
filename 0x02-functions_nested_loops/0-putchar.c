#include "main.h"
#include<stdio.h>
#include <string.h>

/**
 * main - putchar
 *
 * Return: 0
 */
int main(void)
{
	char text[] = "_putchar";
	int i;

	i = 0;
	while (text[i] != '\0')
	{
		_putchar (text[i]);
		i++;
	}
	_putchar ('\n');

}
