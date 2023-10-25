#include <stdlib.h>
#include "main.h"

/**
 * *string_nconcat - concatenates a number of strings
 * @s1: the string to allocate memory in
 * @s2: the string to concatenate from
 * @n: the number of bytes from s2 to s1
 * @m, @o - chars to input
 * Return: a pointer to the resulting string
 * if function fails, return NULL
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)

{
	char *s;
	unsigned int m = 0, o = 0, len1 = 0, len2 = 0;

while (s1 && s1[len1])
		len1++;
while (s2 && s2[len2])
		len2++;

if (n < len2)
s = malloc(sizeof(char) * (len1 + n + 1));
else
	s = malloc(sizeof(char) * (len1 + len2 + 1));

if (!s)
	return (NULL);

while (m < len1)
	{
	s[m] = s1[m];
	m++;
	}

while (n < len2 && m < (len1 + n))
	s[m++] = s2[o++];

while (n >= len2 && m < (len1 + len2))
s[m++] = s2[o++];
s[m] = '\0';
return (s);
}
