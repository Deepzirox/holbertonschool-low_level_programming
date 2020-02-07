#include<stdio.h>
/**
* main - Entry point
* Return: 0 Always (Success)
*/
int main(void)
{
int ascii;
ascii = 48;
while (ascii <= 57)
{
putchar((int)ascii);
ascii++;
}
putchar('\n');
return (0);
}
