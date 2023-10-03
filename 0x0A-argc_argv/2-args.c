#include <stdio.h>

/**
 * main - function that prints a string, followed by a new line
 * @argv: The string to print
 * @argc: The string to print
 *
 * Return: nothing.
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
