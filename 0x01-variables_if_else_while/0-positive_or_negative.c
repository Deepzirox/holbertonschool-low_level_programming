#include<stdlib.h>
#include<time.h>
#include<stdio.h>
/**
 * main - Entry point
 * Return: 0 Always (Success)
 */
int main(void)
{
srand(time(0));
int n = rand() - RAND_MAX / 2;
if (n > 0)
{
printf("%i %s \n", n, "is positive");
}
else if (n == 0)
{
printf("%i %s \n", n, "is zero");
}
else
{
printf("%i %s \n", n, "is negative");
}

return (0);
}
