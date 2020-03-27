#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "holberton.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    int n;
    time_t t;
    int ranval, indval;

    n = 5;

   /* Intializes random number generator */
   srand((unsigned) time(&t));

    for (int test = 0; test < 99; test++)
    {
      ranval = rand() % 100;
      indval = rand() % 40;
      n = get_bit(ranval, indval);
      printf("En el valor %d busca el indice %d que es igual a = %d\n", ranval, indval, n);
    }

    return (0);
}
