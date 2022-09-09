#include <stdio.h>
/**
 * main - prints alphabets excerpt q and e
 * Return: 0
 * Description - All your code should be in the main function
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch != 'e' && ch != 'q')
		{
			putchar(ch);
		}
	}
	putchar('\n');
	return (0);
}
