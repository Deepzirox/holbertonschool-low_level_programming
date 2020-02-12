#include"holberton.h"
/**
 * _abs - computes the absolute value of a integer
 * @n: integer number to compute
 * Return: (int) absolute value
 */
int _abs(int n)
{

	int inc;
	int abstract;

	inc = 0;
	if (n < 0)
	{
		for (int i = 0; i > n; i--)
		{
			inc++;
		}
		abstract = inc;
	}
	else
	{
		abstract = n;
	}
	return (abstract);
}
