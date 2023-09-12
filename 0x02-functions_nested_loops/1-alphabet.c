#include "main.h"

void print_alphabet(void);

/**
 * main - alphabets
 *
 * Return: 0
 */
int main(void)
{
	print_alphabet();
	_putchar('\n');
	return (0);
}

void print_alphabet(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		_putchar(letter);
		letter++;
	}
}
