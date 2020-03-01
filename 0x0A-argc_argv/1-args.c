#include <stdio.h>
/**
 * main - Entry point program
 * @argv: parameters
 * @argc: number of arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	(void)*argv;
	printf("%d\n", argc - 1);
	return (0);
}
