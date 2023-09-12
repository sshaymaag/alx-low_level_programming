#include "main.h"
#include<stdio.h>
/**
 * main - putchar
 *
 * Return: 0
 */
int main(void)
{
	char text[] = "_putchar";
	int i;

	for (i = 0; i < sizeof(text) ; i++)
		_putchar (text[i]);
	_putchar ('\n');

}
