#include "main.h"
#include <unistd.h>

/**
 * main - Entry point
 *
 * Description: Prints _putchar followed by a new line
 *
 * Return: 0 (Success)
 */
int main(void)
{
	char text[] = "_putchar\n";
	int i = 0;

	while (text[i] != '\0')
	{
		write(1, &text[i], 1);
		i++;
	}

	return (0);
}

