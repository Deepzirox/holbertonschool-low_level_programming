#include <unistd.h>
#include "holberton.h"
/**
* _putchar - write a character to stdout
* @character: parameter char to print
*
* Return: char Always (Success)
*/
int _putchar(char character)
{
return (write(1, &character, 1));
}
