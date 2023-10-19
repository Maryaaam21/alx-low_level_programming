#include "main.h"
/**
 * helper_function - to check if the square root of a number exists
 * @num: the char representing the number to be checked
 * @psr: the possible square root
 * Return: the square root of num
 */

int helper_function(int num, int psr)

{
	if ((psr * psr) == num)
{
	return (psr);
}
	else
{
	if ((psr * psr) > num)
	return (-1);

	else
	return (helper_function(num, psr + 1));
}
}

/**
 * _sqrt_recursion - a function that returns
 * the square root of a number
 * @n: the char to be square rooted
 * Return: the square root of n
 */

int _sqrt_recursion(int n)

{
	if (n < 0)
	return (-1);
	else
	return (helper_function(n, 0));
}
