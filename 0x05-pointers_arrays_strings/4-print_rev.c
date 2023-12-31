#include "main.h"

/**
 * print_rev - Prints a string in reverse, followed by a new line.
 * @s: Pointer to the string to be printed in reverse.
 */
void print_rev(char *s)
{
    int i = 0;

    while (s[i] != '\0')
        i++;

    while (i >= 0)
    {
        _putchar(s[i]);
        i--;
    }

    _putchar('\n');
}

