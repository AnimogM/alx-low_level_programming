#include "main.h"
#include <stdlib.h>

/**
 * _strdup - copys a string
 * @str: string to be copied
 *
 * Return: pointer to copied string
 */

char *_strdup(char *str)
{
	char *tmp;
	int i, j;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		;
	tmp = malloc(i * sizeof(char));

	if (tmp == NULL)
		return (NULL);

	for (j = 0; j < i; j++)
	{
		tmp[j] = str[j];
	}
	return (tmp);
}
