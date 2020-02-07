#include<stdio.h>
/**
* main - Entry point
* Return: 0 Always (Success)
*/
int main(void)
{
int asciin, asciic;
asciin = 48;
asciic = 97;
while (asciin <= 57)
{
putchar(asciin);
asciin++;
}
while (asciic <= 102)
{
putchar(asciic);
asciic++;
}
putchar('\n');
return (0);
}
