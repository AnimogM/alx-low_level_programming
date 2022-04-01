#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

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

	if (argc < 2)
	{
		printf("0");
	}
	else
	{

		for (i = 1; i < argc; i++)
		{
			if (isdigit(argv[i]) == 0)
			{
				printf("Error\n");
				break;
				return (1);
			}
			m += atoi(argv[i]);
		}
		printf("%d\n", m);
		return (m);
	}
	return (0);
}
