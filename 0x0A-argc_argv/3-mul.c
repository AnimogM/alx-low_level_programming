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
	int i, m = 1;

	if (args < 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{

		for (i = 1; i < argc; i++)
		{
			m *= atoi(argv[i]);
		}
		printf("%d\n", m);
		return (m);
	}
}
