#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point program
 * @argv: parameters
 * @argc: number of arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int a, b, r;
	char *err = "Error";

	if (argc != 3)
	{
		printf("%s\n", err);
	}
	else
	{
		a = atoi(*(argv + 1));
		b = atoi(*(argv + 2));
		r = a * b;
		printf("%d\n", r);
	}

	return (0);
}
