#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: a function that prints a different
 * string according to the last digit of variable n
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int n;
	int lastDigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastDigit = n % 10;

	printf("Last digit of %d is", n);

if (lastDigit > 5)
{
	printf(" and is greater than 5\n");
} else if (lastDigit == 0)
{
	printf(" and is 0\n");
} else
{
	printf(" and is less than 6 and not 0\n");
}


	return (0);
}
