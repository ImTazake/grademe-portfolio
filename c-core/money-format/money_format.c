int	money_format(long cents, char *out)
{
	unsigned long	n;
	int				len;
	int				start;
	int				end;
	char			tmp;

	len = 0;
	if (cents < 0)
	{
		out[len++] = '-';
		n = (unsigned long)(-(cents + 1)) + 1;
	}
	else
		n = (unsigned long)cents;
	start = len;
	n /= 100;
	if (n == 0)
		out[len++] = '0';
	while (n > 0)
	{
		out[len++] = '0' + n % 10;
		n /= 10;
	}
	end = len - 1;
	while (start < end)
	{
		tmp = out[start];
		out[start++] = out[end];
		out[end--] = tmp;
	}
	out[len++] = '.';
	if (cents < 0)
		n = (unsigned long)(-(cents + 1)) + 1;
	else
		n = (unsigned long)cents;
	out[len++] = '0' + (n / 10) % 10;
	out[len++] = '0' + n % 10;
	out[len] = '\0';
	return (len);
}