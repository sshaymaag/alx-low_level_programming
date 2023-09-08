#include <stdio.h>
/**
 * main - alphabets
 *
 * Return: 0
 */
int main(void)
{
	int x = 0;
	int n = 1;
	int m = 2;

	while (x < 10)
	{
		while (n < 10)
		{
			while (m < 10)
			{
				if (x != n && n != m)
				{
					putchar('0' + x);
					putchar('0' + n);
					putchar('0' + m);
					putchar(',');
					putchar(' ');
				}
				m++;
			}
			n++;
			m = n;
		}
		x++;
		n = x;
	}
	putchar('\n');
	return (0);
}

