#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: the string to look at
 * @accept: the string to compare to
 *
 * Return: bytes in the initial segment of s
 */
unsigned int _strspn(char *s, char *accept)
{
	int i = 0;
	int j = 0;

	for (; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
			{
				break;
			}
		}
		if (s[i] != accept[j])
			break;
	}
	return (i);
}
