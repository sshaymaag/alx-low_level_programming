#include <stdio.h>
#include <stdlib.h>

/**
 * main - function that prints a string, followed by a new line
 * @argv: The string to print
 * @argc: The string to print
 *
 * Return: nothing.
 */

int main(int argc, char *argv[])
{
	if (argc < 3)
	{
		printf("Error");
		return (1);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
