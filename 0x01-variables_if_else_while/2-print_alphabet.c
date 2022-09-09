#include <stdio.h>
/**
 *main - prints the alphabet
 *Return: 0
 *Description - All your code should be in the main function
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
