#include "main.h"
#include <stdio.h>

/**
 * print_array - print n elements of an array of integers
 * @a: array
 * @n: elements to print
 * Return: no return.
 */
void print_array(int *a, int n)
{
	int f = 0;

	for (; f < n; f++)
	{
		printf("%d", *(a + f));
		if (f != (n - 1))
			printf(", ");
	}
	printf("\n");
}
