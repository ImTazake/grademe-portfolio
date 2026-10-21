
#include <limits.h>

int	money_format(long cents, char *out)
{
	unsigned long	value;
	unsigned long	units;
	int				i;
	int				j;
	char			temp[20];

	i = 0;
	if (cents < 0)
	{
		out[i++] = '-';
		value = (unsigned long)(-(cents + 1)) + 1;
	}
	else
		value = (unsigned long)cents;
	units = value / 100;
	j = 0;
	while (units > 0)
	{
		temp[j++] = '0' + units % 10;
		units /= 10;
	}
	if (j == 0)
		temp[j++] = '0';
	while (j > 0)
		out[i++] = temp[--j];
	out[i++] = '.';
	out[i++] = '0' + (value % 100) / 10;
	out[i++] = '0' + value % 10;
	out[i] = '\0';
	return (i);
}