#include<stdlib.h>
#include<time.h>
/**
 * main - Entry point
 * Return: 0 Always (Success)
 */
#define neutral 0
int main(void)
{
srand(time(0));
long n = rand() - RAND_MAX / 2;
if (n > neutral)
{
printf("%i %s \n", n, "is positive");
}
else if (n == neutral)
{
printf("%i %s \n", n, "is zero");
}
else
{
printf("%i %s \n", n, "is negative");
}

return (0);
}
