#include "main.h"

/**
 * print_triangle - Prints a triangle using the # character
 * @size: The size of the triangle
 *
 * Description: Prints a right-angled triangle with
 * size number of rows using the # character.
 */
void print_triangle(int size)
{
	int row, col;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}

	for (row = 0; row < size; row++)
	{
		for (col = 0; col <= row; col++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}

