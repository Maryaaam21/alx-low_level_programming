#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: a program that prints all
 * possible combinations of two digits.
 *
 * Return: always 0, on success
 */

int main(void)
{
	int i, j;

	for (i = 0; i < 9; i++)
	{
	for (j = i + 1; j < 10; j++)
	{
		putchar(i + '0');
		putchar(j + '0');

	if (i != 8 || j != 9)
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

