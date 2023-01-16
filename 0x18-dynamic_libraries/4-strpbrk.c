#include "main.h"

/**
 * _strpbrk - locates the first occurence in S if any bytes in accept
 * @s: the string to look for occurrences in
 * @accept: the print to compare against
 *
 * Return: a pointer to the byte or NULL
 */
char *_strpbrk(char *s, char *accept)
{
	char c, *p;

	for (c = *s; c != 0; s++, c = *s)
	{
		for (p = accept; *p != 0; p++)
		{
			if (c == *p)
			{
				return (s);
			}
		}
	}
	return (0);
}
