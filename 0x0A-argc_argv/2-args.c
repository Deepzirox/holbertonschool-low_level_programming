#include <stdio.h>
/**
 * main - entry point
 * @argc: int
 * @argv: string
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++, argv++)
		printf("%s\n", *argv);

	return (0);
}
