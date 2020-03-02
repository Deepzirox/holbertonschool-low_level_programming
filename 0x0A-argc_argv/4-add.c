#include <stdio.h>
#include <stdlib.h>
/**
 * _isdigit - check if a char is uppercase
 *@c: char to check
 * Return: 1 (uppercase), 0 (otherwise)
 */
int _isdigit(int c)
{
	int value, res;

	res = 0;
	for (value = '0'; value <= '9'; value++)
	{
		if (value == c)
		{
			res = 1;
		}
	}

	return (res);
}
/**
 * sum - validate char and add
 * @ch: char to evaluate
 * @tmp: support that contains command
 * @res: result to print
 * Return: void
 */
void sum(char **ch, char *tmp, int *res)
{
	char tm = **ch;

	int validator = _isdigit(tm);

	if (validator == 0)
	{
		printf("Error\n");
		exit(0);
	}
	else
	{
		*res += atoi(tmp);
	}
}
/**
 * main - entry point program
 * @argc: num arguments
 * @argv: arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i, res2 = 0;
	char *tmp = 0;
	
	argv++;
	if (argc > 0)
	{
	  for (i = 0; i < (argc - 1); i++, argv++)
		{
			tmp = *argv;
			for (; *tmp != '\0'; tmp++)
				sum(&tmp, tmp, &res2);
		}
		printf("%d \n", res2);
	}
	return (0);
}
