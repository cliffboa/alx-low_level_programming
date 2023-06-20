#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: This program prints all the numbers of base 16 in lowercase
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num;
	char hexDigits[] = "0123456789abcdef";

	for (num = 0; num < 16; num++)
	{
		putchar(hexDigits[num]);
	}
	putchar('\n');

	return (0);
}

