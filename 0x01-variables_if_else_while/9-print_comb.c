#include<stdio.h>
/**
* main - Entry point
* Return: 0 Always (Success)
*/
int main(void)
{
int asciin;
asciin = 48;
while (asciin <= 57)
{
putchar(asciin);
if (asciin != 57)
putchar(44);

putchar(32);
asciin++;
}
putchar('\n');
return (0);
}
