#include <stdio.h>
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0)
		{
			printf("Fizz");
			putchar(' ');

		}
		if (i % 5 == 0)
		{
			printf("Buzz");
			putchar(' ');

		}
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz");
			putchar(' ');

		}
		else
		{
			printf("%d", i);
			putchar(' ');
		}
	}
	printf("\n");
	return (0);
}
