#include "main.h"
#include <stdio.h>

/**
 * swap_int - Write a function that swaps the values of two integers
 * @a: first pointer
 * @b: second pointer
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int x = *a;

	*a = *b;
	*b = x;
}
