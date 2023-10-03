#include <stdio.h>

/**
 * main - function that prints a string, followed by a new line
 * @argv: The string to print
 * @argc: The string to print
 *
 * Return: nothing.
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
