#include <stdio.h>

/**
 * main - prints file name
 * @argc: number of arguments
 * @argv: array of strings
 *
 * Return: always 0;
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
