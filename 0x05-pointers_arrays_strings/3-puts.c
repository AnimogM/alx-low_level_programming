#include "main.h"

/**
*_puts - prints the characters of a string
*followed by a new line;
*@str: string to be printed
*/

void _puts(char *str)
{
int i = 0;
while (str[i] != 0)
    {
        _putchar(str[i]);
        i++;
    }
    _putchar('\n');
}
