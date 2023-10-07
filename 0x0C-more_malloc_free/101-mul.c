#include "main.h"
#include <stdio.h>
#include <string.h>
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
	int number1, number2, len;
	int *ptr;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}
	len = strlen(argv[1]) + strlen(argv[2]) + 1;
	ptr = malloc(sizeof(int) * len);

	number1 = atoi(argv[1]);
	number2 = atoi(argv[2]);

	if (!number1 || !number2)
	{
		printf("Error\n");
		exit(98);
	}

	*ptr = number1 * number2;

	printf("%d\n", *ptr);
	return (0);
}
