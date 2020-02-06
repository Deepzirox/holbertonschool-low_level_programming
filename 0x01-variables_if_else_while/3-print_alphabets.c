#include<stdio.h>
/**
 * main - Entry point
 * Return: 0 Always (Success)
 */
int main(void)
{

char lower, upper;

upper = 'A';
lower = 'a';
while (lower <= 'z')
{
putchar(lower);
lower++;
}
while (upper <= 'Z')
{
putchar(upper);
upper++;
}
putchar('\n');
return (0);
}
