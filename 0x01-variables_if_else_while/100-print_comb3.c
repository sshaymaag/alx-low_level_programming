#include <stdio.h>
/**
 * main - alphabets
 *
 * Return: 0
 */
int main(void)
{
	int n = 0;
	int m = 0;

	while (n < 10)
	{
		while (m < 10)
		{
			if (m != n && m != n - 1)
			{
				putchar('0' + n);
				putchar('0' + m);
				if (n == 9 && m == 7)
				{
					break;
				}
				putchar(',');
				putchar(' ');
			}
			m++;
		}
		n++;
		m = 0;
	}
	putchar('\n');
	return (0);
}

