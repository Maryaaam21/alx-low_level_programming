#include "main.h"

/**
 * _strlen_recursion - returns the length of a string
 * @s: string
 * Return: the length of a string
 */

int _strlen_recursion(char *s)

{
if (*s == '\0')
return (0);
else
return (1 + _strlen_recursion(s + 1));
}

/**
 * comparer - to compare each character of the string if palindrome
 * @s: string
 * @i1: smallest iterator
 * @i2: largest iterator
 * Return: .
 */

int comparer(char *s, int i1, int i2)

{
if (*(s + i1) == *(s + i2))
	{
if (i1 == i2 && i1 == i2 + 1)
return (1);
return (0 + comparer(s, i1 + 1, i2 - 1));
}
return (0);
}

/**
 * is_palindrome - a function that checks for palindromes
 * @s: char representing a string
 * Return: 1 if s is a palindrome, 0 if not
 */

int is_palindrome(char *s)

{
if (*s == '\0')
return (1);
return (comparer(s, 0, _strlen_recursion(s)));
}
