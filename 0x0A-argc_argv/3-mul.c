#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints number of arguments
 * @argc: number of argument
 * @argv: array of argument
 *
 * Return: always 0
 */

int main(int argc, char *argv[])
{
	int i, a, b, m = 1;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{

		a = atoi(argv[1]);
		b = atoi(argv[2]);
		m = a * b;
		printf("%d\n", m);
		return (m);
	}
}
