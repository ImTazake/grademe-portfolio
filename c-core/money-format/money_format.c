static void add_nbr(unsigned long nbr, char *out, int *index, int round)
{
	if (round == 0 && nbr < 10)
		out[(*index)++] = '0';
	if (nbr >= 10)
		add_nbr(nbr / 10, out, index, 1);
	out[(*index)++] = "0123456789"[nbr % 10];
}

int	money_format(long cents, char *out)
{
	int index = 0;
	unsigned long cent;

	if (cents < 0)
	{
		out[index++] = '-';
		cent = -(unsigned long)cents;
	}
	else
		cent = (unsigned long)cents;

	add_nbr(cent / 100, out, &index, 1);
	out[index++] = '.';
	add_nbr(cent % 100, out, &index, 0);
	out[index] = '\0';
	return (index);
}