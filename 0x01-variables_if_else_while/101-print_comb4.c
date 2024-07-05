#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: a program that prints all possible
 * different combinations of three digits.
 *
 * Return: always 0, on success
 *
 */

int main(void)
{
	int i, j, k;

	for (i = 0; i < 8; i++)
	{
	for (j = i + 1; j < 9; j++)
	{
	for (k = j + 1; k < 10; k++)
	{
		putchar(i + '0');
		putchar(j + '0');
		putchar(k + '0');
	if (i != 8 || j != 9 || k != 9)
	{
		putchar(',');
		putchar(' ');
	} else
	{
		putchar('\n');
	}
	}
	}
	}
	return (0);
}
