int	cmp_mixed(int a, unsigned int b)
{
	if (a < 0 || (unsigned int)a < b)
		return (-1);
	if((unsigned int)a == b)
		return (0);
	else
		return (1);
}
