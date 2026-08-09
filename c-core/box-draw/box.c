#include <unistd.h>
void ft_line(int max, char sides, char center)
{
	int i = 1;
	while(i <= max)
	{
		if (i == 1)
			write(1, &sides, 1);
		else if (i < max)
			write(1, &center, 1);
		else
			write (1, &sides, 1);
		i++;
	}
	write(1, "\n", 1);
}

int ft_non_nbr(char *str)
{
	int i = 0;
	while(str[i])
	{
		if(!(str[i] >= '0' && str[i] <= '9'))
			return 0;
		i++;
	}
	return 1;
}

int	ft_atoi(char *str)
{
	int	i;
	int	n;

	i = 0;
	n = 0;
	if(ft_non_nbr(str) == 0)
		return 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
		n = n * 10 + (str[i] - '0');
		i++;
	}
	return (n);
}

int	main(int argc, char **argv)
{
	int value_x;
	int value_y;
	int index = 1;
	if(argc != 3)
	{
		write(1, "wrong number of arguments\n", 26);
		return 0;
	}
	value_x = ft_atoi(argv[1]);
	value_y = ft_atoi(argv[2]);
	if(value_x == 0 || value_y == 0)
		return 0;
	while (index <= value_y)
	{
		if(index == 1)
			ft_line(value_x, '+', '-');
		else if (index < value_y)
			ft_line(value_x, '|', ' ');
		else
			ft_line(value_x, '+', '-');
		index++;
	}
}
