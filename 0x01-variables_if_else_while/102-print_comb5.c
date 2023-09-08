#include <stdio.h>
/**
* main - combination
* Return: 0
*
*/
int main(void)
{
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0 ; j < 9; j++)
		{
			for (int m = 0; m < 10; m++)
			{
				for (int n = 1; n < 10; n++)
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
