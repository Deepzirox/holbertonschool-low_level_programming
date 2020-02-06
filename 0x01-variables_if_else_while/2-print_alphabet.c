#include<stdio.h>
/**
 * main - Entry point
 * Return: 0 Always (Success)
 */
int main(void)
{

char alpha = 'a';

while (alpha <= 'z')
{
putchar((int) alpha);
alpha++;
}
putchar('\n');
return (0);
}
