
int	digit_count(int n)
{
	int count = 1;
	while(n / 10 != 0)
	{
		n /= 10;
		count++;
	}
	return (count);
}
