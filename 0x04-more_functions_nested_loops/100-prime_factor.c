#include <stdio.h>
#include <math.h>

/**
 * largest_prime_factor - Finds the largest prime factor of a number
 * @n: The number to find the largest prime factor of
 *
 * Return: The largest prime factor of the number
 */
long largest_prime_factor(long n)
{
	long i, max_prime;

	max_prime = -1;

	while (n % 2 == 0)
	{
		max_prime = 2;
		n /= 2;
	}

	for (i = 3; i <= sqrt(n); i += 2)
	{
		while (n % i == 0)
		{
			max_prime = i;
			n /= i;
		}
	}

	if (n > 2)
		max_prime = n;

	return max_prime;
}

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	long number = 612852475143;
	long largest_prime;

	largest_prime = largest_prime_factor(number);

	printf("%ld\n", largest_prime);

	return 0;
}

