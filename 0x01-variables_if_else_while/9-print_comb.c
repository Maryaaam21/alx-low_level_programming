#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: a program that prints
 * all possible combinations of single
 * digit numbers.
 *
 * Return: always 0, on success
 *
 */

int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(i + '0');

		if (i < 9)
		{
			putchar(',');
			putchar(' ');
	} else
	{
		putchar('\n');
	}
	}
	return (0);
}
