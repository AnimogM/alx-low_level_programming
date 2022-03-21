#include "main.h"

/**
 *print_rev - prints reversed string;
 *@str: string to be printed
 */

void print_rev(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		i++;
	}

	while (i > 0)
	{
		_putchar(str[i - 1]);
		i--;
	}
	_putchar('\n');
}
