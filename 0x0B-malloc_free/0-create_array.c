#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/*
 *create_array - creates an array of char
 * @size: size of the array
 * @c: value of array
 *
 * Return: Null or pointer to array
 */

char *create_array(unsigned int size, char c)
{
	char *k;
	unsigned int i;

	if (size == 0)
		return (NULL);

	k = malloc(size * sizeof(char));
	if (k == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			k[i] = c;
		}
		return (k);
	}
}
