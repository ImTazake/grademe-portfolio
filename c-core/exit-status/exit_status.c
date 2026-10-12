
#include <unistd.h>
#include <limits.h>

static int	parse_int(char *str, int *out)
{
	int				i;
	int				sign;
	int				digit;
	int				overflow;
	unsigned long	n;
	unsigned long	limit;

	i = 0;
	sign = 1;
	n = 0;
	overflow = 0;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	if (sign < 0)
		limit = (unsigned long)INT_MAX + 1UL;
	else
		limit = (unsigned long)INT_MAX;
	if (str[i] < '0' || str[i] > '9')
		return (2);
	while (str[i] >= '0' && str[i] <= '9')
	{
		digit = str[i] - '0';
		if (!overflow)
		{
			if (n > (limit - digit) / 10)
				overflow = 1;
			else
				n = n * 10 + digit;
		}
		i++;
	}
	if (str[i] != '\0')
		return (2);
	if (overflow)
		return (3);
	if (sign < 0)
	{
		if (n == (unsigned long)INT_MAX + 1UL)
			*out = INT_MIN;
		else
			*out = -(int)n;
	}
	else
		*out = (int)n;
	return (0);
}

static void	put_number(int number)
{
	char			buffer[12];
	int				len;
	unsigned int	n;

	len = 0;
	if (number < 0)
	{
		write(1, "-", 1);
		n = 0u - (unsigned int)number;
	}
	else
		n = (unsigned int)number;
	if (n == 0)
		buffer[len++] = '0';
	while (n > 0)
	{
		buffer[len++] = '0' + n % 10;
		n /= 10;
	}
	while (len > 0)
		write(1, &buffer[--len], 1);
}

int	main(int argc, char **argv)
{
	int	i;
	int	value;
	int	sum;
	int	status;

	if (argc == 1)
		return (1);
	i = 1;
	sum = 0;
	while (i < argc)
	{
		status = parse_int(argv[i], &value);
		if (status != 0)
			return (status);
		if (value > 0 && sum > INT_MAX - value)
			return (3);
		if (value < 0 && sum < INT_MIN - value)
			return (3);
		sum += value;
		i++;
	}
	put_number(sum);
	write(1, "\n", 1);
	return (0);
}
