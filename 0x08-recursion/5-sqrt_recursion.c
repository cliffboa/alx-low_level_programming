#include "main.h"

/**
 * sqrt_helper - Recursive helper function to calculate the square root
 * @n: The number to calculate the square root of
 * @i: The current value to check for square root
 *
 * Return: The square root of n, or -1 if it does not have a natural square root
 */
int sqrt_helper(int n, int i);

/**
 * _sqrt_recursion - Calculates the natural square root of a number
 * @n: The number to calculate the square root of
 *
 * Return: The square root of n, or -1 if it does not have a natural square root
 */
int _sqrt_recursion(int n)
{
    return (sqrt_helper(n, 0));
}

/**
 * sqrt_helper - Recursive helper function to calculate the square root
 * @n: The number to calculate the square root of
 * @i: The current value to check for square root
 *
 * Return: The square root of n, or -1 if it does not have a natural square root
 */
int sqrt_helper(int n, int i)
{
    if (i * i > n)
        return (-1);
    if (i * i == n)
        return (i);
    return (sqrt_helper(n, i + 1));
}

