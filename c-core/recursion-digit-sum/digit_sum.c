int	digit_sum(int n)
{
	int	digit;

	if (n >= -9 && n <= 9)
	{
		if (n < 0)
			return (-n);
		return (n);
	}
	digit = n % 10;
	if (digit < 0)
		digit = -digit;
	return (digit + digit_sum(n / 10));
}