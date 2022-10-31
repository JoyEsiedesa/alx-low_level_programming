#include "main.h"

/**
 * set_string - prints value of a pointer to a char.
 * @s: the pointer
 * @to: the char string to point to
 *
 * Return: nothing
 */
void set_string(char **s, char *to)
{
	*s = to;
}
