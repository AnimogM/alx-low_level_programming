#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - program to perform operations
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: always 0
 */

int main(int argc, char *argv[])
{
	int a, b, r;
	int (*f)(int, int);

	if ((argc) != 4)
	{
		printf("Error\n");
		exit(98);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);
	f = get_op_func(argv[2]);
	if (f == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	r = f(a, b);
	printf("%d\n", r);
	return (0);
}
