#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: A program that prints the
 * alphabet in reverse, followed
 * by a new line.
 *
 * Return: always 0, on success
 *
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
