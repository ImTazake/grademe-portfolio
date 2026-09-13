long	abs_safe(int n)
{
	long	result = n;

	if (result < 0)
		result = -result;
	return (result);
}