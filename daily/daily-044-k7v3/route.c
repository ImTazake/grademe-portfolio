int	reachable(const int *base, const int *size, int n, int addr)
{
	int	i;

	i = 0;
	while (i < n)
	{
		if (size[i] > 0
			&& addr >= base[i]
			&& addr < base[i] + size[i])
			return (1);
		i++;
	}
	return (0);
}