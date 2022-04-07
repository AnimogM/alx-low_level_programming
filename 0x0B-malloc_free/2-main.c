#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - check the code for ALX School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    char *s, *t, *v;

    s = str_concat("Betty ", "Holberton");
    t = str_concat("Hello", NULL);
    v = str_concat(NULL, "Hello");
    if (s == NULL)
    {
        printf("failed\n");
        return (1);
    }
    printf("%s\n", s);
    printf("%s\n", t);
    printf("%s\n", v);
    free(s);
    free(t);
    free(v);
    return (0);
}
