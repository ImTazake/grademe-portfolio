#include <unistd.h>

int	atoi(char *str)
{
	int sign = 1;
	int value = 0;
	int i = 0;

	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (str[i])
		value = value * 10 + (str[i++] - '0');
	return (sign * value);
}

void	putnbr(int nbr)
{
	if (nbr < 0)
	{
		nbr *= -1;
		write(1, "-", 1);
	}
		
	if(nbr / 10)
		putnbr(nbr / 10);
	write(1, &"0123456789"[nbr % 10], 1);
}

int	main(int argc, char **argv)
{
	int i = 0;
	int sum = 0;
	while (++i < argc)
		sum += atoi(argv[i]);
	putnbr(sum);
	write(1, "\n", 1);
	return (0);
}
