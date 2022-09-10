#include <stdio.h>
/**
 * main - prints numbers
 * Return: 0 when successful
 * Description - All your code should be in the main function
 */
int main(void)
{
	int d;

	for (d = '0'; d <= '9'; d++)
	{
		putchar(d);
	}
	putchar('\n');
	return (0);
}
