#include <stdio.h>
/**
* main - combination
* Return: 0
*
*/
int main(void)
{
	int i;
	int j;
	int m;
	int n;

	for (i = 0; i < 10; i++)
	{
		for (j = 0 ; j < 9; j++)
		{
			for (m = 0; m < 10; m++)
			{
				for (n = 1; n < 10; n++)
				{
					putchar('0' + i);
					putchar('0' + j);
					putchar(' ');
					putchar('0' + m);
					putchar('0' + n);
					if (m == 9 && n == 9)
					{
						break;
					}
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	return (0);
}
