#include<stdio.h>
/**
 * main - Entry point
 * Return: 0 Always (Success)
 */
int main(void)
{
char lower;
lower = 'a';
while (lower <= 'z')
{
if ((lower != 'q') && (lower != 'e'))
{
putchar((int)lower);
}
lower++;
}
return (0);
}
