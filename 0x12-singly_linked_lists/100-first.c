#include <stdio.h>

/**
 * bmain - print words before main function is executed
 * Return: nothing.
 */

void __attribute__((constructor)) bmain()
{
	printf("You're beat! and yet, you must allow");
	printf(",\nI bore my house upon my back!\n");
}
