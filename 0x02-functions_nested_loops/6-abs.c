/**
 * _abs - computes the absolute value of a integer
 * @n: integer number to compute
 * Return: (int) absolute value
 */
int _abs(int n)
{
	if (n < 0)
	{
		return (n *= -1);
	}
	else
	{
		return (n);
	}
}
