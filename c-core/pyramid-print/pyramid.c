#include <stdlib.h>
#include <unistd.h>

void	print_pyramid(int n)
{
{
	int	i = 1;
	int	j;

	while (i <= n)
	{
		j = 0;
		while (j < n - i)
		{
			write(1, " ", 1);
			j++;
		}
		j = 0;
		while (j < (2 * i) - 1)
		{
			write(1, "#", 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
}
}

int	main(int ac, char **av)
{
	if(ac != 2)
	{
		write(1, "wrong number of arguments\n", 26);
		return (0);
	}
	print_pyramid(atoi(av[1]));
	return (0);
}