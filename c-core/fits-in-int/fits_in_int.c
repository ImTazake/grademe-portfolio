int	fits_in_int(long value)
{
	if(value > 2147483647 || value < -2147483648)
		return (0);
	return (1);
}
