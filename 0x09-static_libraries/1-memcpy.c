#include "main.h"

/**
 * _memcpy - copies n bytes from memory area src to memory area dest
 * @dest: the place to copy to
 * @src: source to copy from
 * @n: how much to copy
 * Return: a pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *ptr = dest;

	while (n-- > 0)
	{
		*dest = *src;
		dest++;
		src++;
	}
	return (ptr);
}
