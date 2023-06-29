#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int a[5];
	int *p;

	p = &a[2];
	a[2] = 1024;
	/* write your line of code here */
	*(a + 2) = 98;
	printf("a[2] = %d\n", a[2]);
	return (0);
}

