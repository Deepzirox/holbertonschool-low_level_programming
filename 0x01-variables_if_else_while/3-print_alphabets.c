#include<stdio.h>
#include<ctype.h>
/**
 * main - Entry point
 * Return: 0 Always (Success)
 */

int main(void)
{

char alpha = 'a';

while (alpha <= 'z')
{
putchar((int)alpha);
alpha++;
}
alpha = 'a';
while (alpha <= 'z')
{
putchar((int)toupper(alpha));
alpha++;
}
putchar('\n');
return (0);
}
