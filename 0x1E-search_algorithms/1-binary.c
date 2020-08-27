#include "search_algos.h"
/**
 * printer - print array
 * @array: array of integers
 * @l: left index
 * @r: right index
 */
void printer(int *array, int l, int r)
{
	printf("Searching in array: ");
	while (l < r)
	{
		printf("%d", array[l]);
		if (l < r - 1)
			printf(", ");
		else
			putchar('\n');
		l += 1;
	}
}
/**
 * binary_search - binary search in array
 * @array: array of integers
 * @size: size of array
 * @value: vaue to find
 * Return: Index of value
 */
int binary_search(int *array, size_t size, int value)
{
	int l, r, mid;

	for (l = 0, mid = (size - 1) / 2, r = size; r > l;)
	{
		printer(array, l, r);
		if (array[mid] == value)
		{
			return (mid);
		}
		else
		{
			if (array[mid] > value)
			{
				r = mid;
				mid = l + (r - l - 1) / 2;
			}
			else
			{
				l = mid + 1;
				mid = l;
			}
		}
	}

	return (-1);
}
