#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - check the code
 *
 * @argc: The string to print
 * @argv: The string to print
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int number1, number2;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}

	number1 = atoi(argv[1]);
	number2 = atoi(argv[2]);

	if (!number1 || !number2)
	{
		printf("Error\n");
		exit(98);
	}

	printf("%d\n", number1 * number2);
	return (0);
}
