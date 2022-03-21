#include "main.h"

/**
 * reset_to_98 - reset to 98;
 *
 * 0-reset_to_98.c - takes a pointer to an int as
 * parameter and updates the value it points to
 * 98;
 *
 * Return - 0;
 */

void reset_to_98(int *n)
{
	int *prt;

	prt = n;

	*prt = 98;
}
