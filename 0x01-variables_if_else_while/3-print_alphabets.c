#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: a program that prints the alphabet in
 * lowercase, then uppercase, followed
 * by a new line
 *
 * Return: always 0 on success
 *
 */

int main(void)
{

/* first loop for lowercase */
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
{
	putchar(ch);
}
/* second loop for uppercase */
	for (ch = 'A'; ch <= 'Z'; ch++)
{
	putchar(ch);
}
	putchar('\n');

	return (0);
}
