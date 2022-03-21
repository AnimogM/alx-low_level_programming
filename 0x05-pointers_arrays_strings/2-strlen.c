#include "main.h"

/**
 * _strlen - returns the length of a string;
 * @_strlen: return i;
 * @s: string to get length;
 * return - i;
 */

int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	return (i);
}

