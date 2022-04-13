#include "function_pointers.h"

/**
 * array_iterator - prints all elements
 * @array: array to be printed
 * @size: size of the array
 * @action: pprint pointer
 *
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;
	
	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}

}
