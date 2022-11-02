#include "main.h"

/**
 * factorial - prints the factorial of a given number
 * @n: the integer
 *
 * Return: 1 or -1 to indicate an error
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
