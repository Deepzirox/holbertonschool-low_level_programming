#include <stdio.h>
#include "lists.h"
void before(void) __attribute__ ((constructor));
/**
 * before - print before main
 * Return: void
 */
void before(void)
{
	printf("%s", "You're beat! and yet, you must allow,\n");
	printf("%s", "I bore my house upon my back!\n");
}
