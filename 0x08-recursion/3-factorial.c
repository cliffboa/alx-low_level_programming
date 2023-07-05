#include "main.h"

/**
 * factorial - Returns the factorial of a given number
 * @n: The input number
 *
 * Return: The factorial of the number, or -1 if an error occurs
 *
 * Description: This function calculates the factorial of a number
 * using recursion. If the input number is less than 0, it returns -1
 * to indicate an error. The factorial of 0 is defined as 1.
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}

