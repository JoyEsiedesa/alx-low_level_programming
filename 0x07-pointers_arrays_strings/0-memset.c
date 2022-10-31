#include "main.h"

/**
 * _memset - fills the first n bytes of the memory area
 * pointed to by s with the constant byte b
 * @s: memory area
 * @b: the byte
 * @n: # of bytes to fill
 * Return: a pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n);
{
	char *ptr = s;

	while (n-- > 0)
	*ptr++ = b;
	return (s);
}

