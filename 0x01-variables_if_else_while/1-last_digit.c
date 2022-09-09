#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - print the last digit of the number
 * stored in the variable n
 * Return: 0 id executed successfully
 * or non-zero ortherwise
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */

	if (n > 5)
	{
		printf("Last digit of %d and is greater than 5\n", n);
	}

	else if (n == 0)
	{
		printf("Last digit of %d and is 0\n", n);
	}

	else
	{
		printf("Last digit of %d and is less than 6 and not 0\n", n);
	}
	return (0);
}
