#include "main.h"
#include <stddef.h>

/**
 * _strstr - finds the first occurrence of the substring needle
 * @haystack: where to look
 * @needle: what to look for
 *
 *
 * Return: a pointer to the beginning of the located substring, or NULL
 */
char *_strstr(char *haystack, char *needle)
{
	int point;

	for (; *haystack; haystack++)
	{
		for (point = 0; needle[point]; point++)
		{
			if (!(*(haystack + point)))
			{
				return (NULL);
			}
			if (*(haystack + point) != needle[point])
				break;
		}
		if (needle[point] == '\0')
			return (haystack);
	}
	return (NULL);
}


