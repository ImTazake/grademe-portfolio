#include <unistd.h>
#include <limits.h>

void	get_sign(char *str, int *i, int *sign)
{
	if (str[*i] == '-' || str[*i] == '+')
	{
		if (str[*i] == '-')
			*sign = -1;
		(*i)++;
	}
}

int	atoi(char *str, int *status)
{
	int		i = 0;
	int		sign = 1;
	long	value = 0;

	*status = 0;
	get_sign(str, &i, &sign);
	if (str[i] == '\0')
		*status = 2;
	while (str[i] >= '0' && str[i] <= '9')
	{
		value = value * 10 + str[i] - '0';
		if ((sign == 1 && value > INT_MAX)
			|| (sign == -1 && value > (long)INT_MAX + 1))
		{
			*status = 3;
			return (0);
		}
		i++;
	}
	if (str[i] != '\0')
		*status = 2;
	if (*status != 0)
		return (0);
	return ((int)(value * sign));
}

void	putnbr(long nb)
{
	if (nb < 0)
	{
		write(1, "-", 1);
		nb = -nb;
	}
	if (nb > 9)
		putnbr(nb / 10);
	write(1, &"0123456789"[nb % 10], 1);
}

int	main(int argc, char **argv)
{
	long	sum = 0;
	int		i = 1;


	if (argc < 2)
		return (1);
	while (i < argc)
	{
		int		status;
		int		current = atoi(argv[i], &status);
		
		if (status != 0)
			return (status);
		if (current > 0 && sum > INT_MAX - current)
			return (3);
		if (current < 0 && sum < INT_MIN - current)
			return (3);
		sum += current;
		i++;
	}
	putnbr(sum);
	write(1, "\n", 1);
	return (0);
}