#include "main.h"

/**
 *print_rev - prints reversed string;
 *@str: string to be printed
 */

void print_rev(char *str)
{
	int i;
	int len;

	while (str[len] != '\0')
	{
		len++;
	}

	i = len;

	while (i >= 0)
	{
		_putchar(str[i]);
		i--;
	}	
	_putchar('\n');
}
