#include "main.h"

/**
 * infinite_add - Adds two numbers
 * @n1: The first number
 * @n2: The second number
 * @r: The buffer to store the result
 * @size_r: The buffer size
 *
 * Return: Pointer to the result
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int len1, len2, sum, carry, i, j;

	len1 = len2 = sum = carry = 0;

	while (n1[len1] != '\0')
		len1++;
	while (n2[len2] != '\0')
		len2++;

	if (len1 >= size_r || len2 >= size_r)
		return (0);

	len1--;
	len2--;

	for (i = 0; i <= len1 || i <= len2; i++)
	{
		if (i <= len1 && i <= len2)
			sum = (n1[len1 - i] - '0') + (n2[len2 - i] - '0') + carry;
		else if (i <= len1 && i > len2)
			sum = (n1[len1 - i] - '0') + carry;
		else if (i > len1 && i <= len2)
			sum = (n2[len2 - i] - '0') + carry;

		carry = sum / 10;
		sum %= 10;

		r[i] = sum + '0';
	}

	if (carry)
	{
		if (i >= size_r)
			return (0);
		r[i++] = carry + '0';
	}

	if (i >= size_r)
		return (0);

	r[i] = '\0';

	for (j = 0; j < i / 2; j++)
	{
		char temp = r[j];

		r[j] = r[i - j - 1];
		r[i - j - 1] = temp;
	}

	return (r);
}

