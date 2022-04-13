#include "function_pointers.h"

/**
 *print_name - print name
 * @f: pointer to printer
 * @name: name to be printer
 *
 *
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
