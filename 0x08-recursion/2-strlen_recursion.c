#include "main.h"

/**
 * _strlen_recursion - Returns the length of a string
 * @s: The input string
 *
 * Return: The length of the string
 *
 * Description: This function recursively calculates the length of a string
 * by moving to the next character until it reaches the null terminator ('\0').
 * It keeps track of the count by adding 1 for each character encountered.
 * When the null terminator is reached, the count is returned.
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}

