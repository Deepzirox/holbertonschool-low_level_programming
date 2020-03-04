#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
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

	int validator = isdigit(tm);

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
