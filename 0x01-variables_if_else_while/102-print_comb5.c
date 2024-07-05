#include <stdio.h>

/**
 * main - Entry point
 * Description: a program that prints all possible
 * combinations of two two digit numbers.
 *
 * Return: always 0, on success
 */

int main(void)
{
	int i, j;

	for (i = 0; i < 99; i++)
	{
	for (j = i; j + 1 <= 99; j++)
	{
		putchar(i / 10 + '0');
		putchar(i % 10 + '0');

		putchar(' ');
		putchar(j / 10 + '0');
		putchar(j % 10 + '0');

	if (i != 98 && j != 99)
	{
		putchar(',');
		putchar(' ');
	} else
	{
		putchar('\n');
	}
	}
	}
	return (0);
}
