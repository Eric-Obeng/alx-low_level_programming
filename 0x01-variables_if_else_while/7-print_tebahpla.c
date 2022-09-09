#include <stdio.h>
/**
 * main - prints alphabets reversely
 * Return: 0
 * Description - All your code should be in the main function
 */
int main(void)
{
	char ch;

	for (ch = 'z'; ch >= 'a'; ch--)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
