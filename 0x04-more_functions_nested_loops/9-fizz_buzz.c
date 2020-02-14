#include <stdio.h>
/**
 * main - Entry point (app)
 * Return: 0 Always 1 (if err)
 */
int main(void)
{
	int x, b, mthree, mfive, fizz, buzz;

	mfive = 0;
	mthree = 0;
	for (x = 1; x <= 100; x++)
	{
		fizz = 0;
		buzz = 0;
		for (b = 0; b <= 100; b++)
		{
			mthree = 3 * b;
			mfive = 5 * b;
			if (x == mthree)
			{
				fizz = 1;
			}
			if (x == mfive)
			{
				buzz = 1;
			}
		}
		if ((fizz == 1) && (buzz == 1))
		{
			printf("%s ", "FizzBuzz");
		}
		if ((fizz == 1) && (buzz == 0))
		{
			printf("%s ", "Fizz");
		}
		if ((buzz == 1) && (fizz == 0))
		{
			printf("%s ", "Buzz");
		}
		if ((buzz == 0) && (fizz == 0))
		{
			printf("%i ", x);
		}
	}
	putchar('\n');
	return (0);
}
