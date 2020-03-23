#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
/**
 * argstostr - concatenate all arguments
 * @ac: arg counter
 * @av: pointer to arguments
 * Return: string
 */
char *argstostr(int ac, char **av)
{
    int i;
    char *tmp;

    for (i = 0; i < ac; i++)
    {
      tmp = av[i];
    }
    return (tmp);
}
