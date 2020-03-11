#include <stdio.h>
#include <stdlib.h>
/**
 * print_name - print name in function
 * @name: name to print
 * @f: pointer to function
 */
void print_name(char *name, void (*f)(char *))
{
	if ((name != NULL) && (f != NULL))
	{
		(*f)(name);
	}
}
