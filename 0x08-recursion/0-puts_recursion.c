#include "main.h"

/**
 * _puts_recursion - Prints a string using recursion
 * @s: The input string to be printed
 *
 * Description: This function recursively prints each character of the input
 * string until it reaches the null terminator ('\0'). It prints a new line
 * character ('\n') at the end.
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}

	_putchar(*s);
	_puts_recursion(s + 1);
}

