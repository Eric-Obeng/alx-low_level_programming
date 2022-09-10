#include <stdio.h>
/**
 * main - prints all possible different combinations of three digits.
 * Return: 0 when executed successful
 * Description - All your code should be in the main function
 */
int main(void)
{
	int n, m, l;

	for (n = 48; n < 58; n++)
	{
		for (m = 49; m < 58; n++)
		{
			for (l = 50; l < 58; n++)
			{
				if (l > m && m > n)
				{
					putchar(n);
					putchar(m);
					putchar(l);
					if (n != 55 || m != 56)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}

