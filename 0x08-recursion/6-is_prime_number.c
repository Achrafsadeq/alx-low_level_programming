#include "main.h"

int check_nmber_is_prime(int n, int i);

/**
 * is_prime_number - Checks if a number is prime
 * @n: The number to check
 * Return: 1 if prime, 0 otherwise
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (check_nmber_is_prime(n, 2));
}

/**
 * check_nmber_is_prime - Recursively checks if a number is prime
 * @n: The number to check
 * @i: The current divisor to check
 * Return: 1 if prime, 0 otherwise
 */
int check_nmber_is_prime(int n, int i)
{
	if (i * i > n)
		return (1);
	if (n % i == 0)
		return (0);
	return (check_nmber_is_prime(n, i + 1));
}
