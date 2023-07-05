#include "main.h"

/**
 * _print_rev_recursion - Prints a string in reverse using recursion
 * @s: The input string to be printed in reverse
 *
 * Description: This function recursively prints a string in reverse by
 * moving to the next character until it reaches the null terminator ('\0').
 * Then, it backtracks and prints each character from the end of the string
 * to the beginning.
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
		return;

	_print_rev_recursion(s + 1);
	_putchar(*s);
}

