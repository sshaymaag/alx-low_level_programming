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
	int i, j;
	int s = 0;

	if (argc == 1)
	{
		printf("0\n");
	}
	else
	{
	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
		if (argv[i][j] < 48 || argv[i][j] > 57)
		{
			printf("Error\n");
			return (1);
		}
		}
		s += atoi(argv[i]);
	}
	printf("%d\n", s);
	}
	return (0);
}
