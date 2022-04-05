#include "main.h"
#include <stdlib.h>

/**
 *argstostr - concatenates all args
 *@ac: number of args
 *@av: array of args
 *
 * Return: strings
 */

char *argstostr(int ac, char **av)
{
	int i, j, len = 0, index = 0;
	char *arr;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			len++;
	}

	arr = malloc(sizeof(char) *  (len + 1));
	if (arr == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; j < av[i][j]; j++)
			arr[index++] = av[i][j];
		arr[index++] = '\n';
	}
	return (arr);
}
