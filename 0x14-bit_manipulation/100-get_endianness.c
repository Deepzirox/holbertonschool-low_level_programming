#include "holberton.h"
/**
  * get_endianness - check endianness
  * Return: 1 if little 0 if big
	*/
int get_endianness(void)
{
	int n = 1;

	if (*(char *)&n == 1)
		return (1);

	return (0);
}
