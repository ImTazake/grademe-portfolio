#include <unistd.h>

void	index_alpha(char *str)
{
	int i = 0;
	while (str[i])
	{
	if (str[i] >= 'a' && str[i] <= 'z')
	{
		int count = str[i] - 'a';
		while (count-- > 0)
			write(1, &str[i], 1);
	}
	else if (str[i] >= 'A' && str[i] <= 'Z')
	{
		int count = str[i] - 'A';
		while (count-- > 0)
			write(1, &str[i], 1);
	}
	else
		write (1, &str[i], 1);
	i++;
	}
}

int	main(int argc, char **argv)
{
	if (argc != 2)
	{
		write(1, "wrong number of arguments\n", 26);
		return (0);
	}
		index_alpha(argv[1]);
		write(1, "\n", 1);
	return (0);
}
