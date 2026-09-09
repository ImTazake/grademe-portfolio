int	clamp(int value, int low, int high)
{
	if (low > high)
		return (low);
	if (value < low)
		return (low);
	else if (value > high)
		return (high);
	return (value);
}