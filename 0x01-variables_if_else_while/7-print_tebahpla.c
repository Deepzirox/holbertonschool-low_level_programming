#include<stdio.h>
/**
* main - Entry point
* Return: 0 Always (Success)
*/
int main(void)
{
int z, a;
z = 122;
a = 97;
while (z >= a)
{
putchar(z);
z--;
}
putchar('\n');
return (0);
}
