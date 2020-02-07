#include<stdio.h>
/**
* main - Entry point
* Return: 0 Always (Success)
*/
int main(void)
{
int iterator;
while (iterator < 100)
{
putchar((iterator / 10) + '0');
putchar((iterator % 10) + '0');
if (iterator != 99)
{
putchar(44);
putchar(32);
}
iterator++;
}
putchar('\n');
return (0);
}

