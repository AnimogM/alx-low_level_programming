#include "dog.c"
#include <stdlib.h>

/**
 * free_dog - free structure
 * @d: dog
 */

void free_dog(dog_t *d)
{
	free(d);
}
