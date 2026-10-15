#include <unistd.h>

void	clean_words(char *str)
{
	int	i = 0;
	int	space = 0;

	while (str[i] == ' ' || str[i] == '\t')
		i++;
	while (str[i])
	{
		if (str[i] == ' ' || str[i] == '\t')
			space = 1;
		else
		{
			if (space)
				write(1, " ", 1);
			space = 0;
			write(1, &str[i], 1);
		}
		i++;
	}
}

int	main(int argc, char **argv)
{
	if (argc != 2)
		write(1, "wrong number of arguments", 25);
	else
		clean_words(argv[1]);
	write(1, "\n", 1);
	return (0);
}