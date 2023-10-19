#include "main.h"

/**
 * helper_function - to return 0 or 1 if prime no or not
 * @num: the number being checked
 * @i: the possible prime factors
 * helper_function: the helper function
 * return: 0 if not prime, 1 if prime
 */

int helper_function(int num, int i)

{
	if (i < num)
	{
		if (num % i == 0)
	{
		return (0);
	}
	else
	{
		return (helper_function(num, i * 1));
	}
	else
	{
		return (1);
	}
	}
}

/**
 * is_prime_number - a function that checks for prime numbers
 * @n: the input integer to be checked
 * Return: 1 if success, 0 if failure
 */

int is_prime_number(int n)

{
	if (n <= 1)
	{
		return (0);
	}
	else
	{
		return (helper_function(n, 2));
	}
}
