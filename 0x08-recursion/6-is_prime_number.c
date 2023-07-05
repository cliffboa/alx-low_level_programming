/**
 * _check_prime - Recursive helper function to check if a number is prime
 * @n: The number to check
 * @div: The current divisor to check
 *
 * Return: 1 if the number is prime, 0 otherwise
 */
int _check_prime(int n, int div);

/**
 * is_prime_number - Checks if a number is a prime number
 * @n: The number to check
 *
 * Return: 1 if the number is prime, 0 otherwise
 */
int is_prime_number(int n)
{
    if (n <= 1)
        return (0);
    return (_check_prime(n, 2));
}

/**
 * _check_prime - Recursive helper function to check if a number is prime
 * @n: The number to check
 * @div: The current divisor to check
 *
 * Return: 1 if the number is prime, 0 otherwise
 */
int _check_prime(int n, int div)
{
    if (n % div == 0)
        return (0);
    if (div * div > n)
        return (1);
    return (_check_prime(n, div + 1));
}

