#include "main.h"

/**
 * wildcmp - a function that compares two strings and
 * checks if they are identical or not
 * @s1: the first string to compare
 * @s2: the second string to compare
 * Return: 1 if identical strings, 0 if not identical strings
 */

int wildcmp(char *s1, char *s2)

{
if (*s2 == '*' && *(s2 + 1) != '\0')
	return (0);
if (*s1 == '\0' && *s2 == '\0')
	return (1);
if (*s1 == *s2)
	return (wildcmp(s1 + 1, s2 + 1));
if (*s2 == '*')
return (wildcmp(s1, s2 + 1) || wildcmp(s1 + 1, s2));
return (0);
}
