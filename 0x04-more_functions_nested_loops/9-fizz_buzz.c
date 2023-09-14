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
		else if (i % 5 == 0)
		{
			printf("Buzz");
			putchar(' ');

		}
		else if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz");
			putchar(' ');

		}
		else if (i % 3 != 0 && i % 5 != 0)
		{
			printf("%d", i);
			putchar(' ');
		}
	}
	printf("\n");
	return (0);
}
