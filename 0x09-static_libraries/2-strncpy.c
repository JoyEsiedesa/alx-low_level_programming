#include "main.h"

/**
 * _strncpy - Write a function that copies a string
 *
 * @src: source of strings
 * @dest: destination of string
 * @n: length of int
 *
 * Return: pointer to the result of string dest
 */
char *_strncpy(char *dest, char *src, int n)
{
int i;

	for (i = 0; i < n && *(src + i); i++)
	{
		*(dest + i) = *(src + i);
	}
	for (; i < n; i++)
	{
		*(dest + i) = '\0';
	}
	return (dest);
}
