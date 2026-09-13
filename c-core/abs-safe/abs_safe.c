// Return the absolute value of n as a long.
// Widen to long before negating, never after.
long	abs_safe(int n)
{
	long	result = n;

	if (result < 0)
		result = -result;
	return (result);
}