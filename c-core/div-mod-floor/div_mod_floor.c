void	div_mod_floor(int a, int b, int *q, int *r)
{
	*q = a / b;
	*r = a % b;
	if (*r < 0)
	{
		if (b > 0)
			(*q)--;
		else
			(*q)++;
		if (b < 0)
			*r -= b;
		else
			*r += b;
	}
}