#include <unistd.h>

int	main(int argc, char **argv)
{
	int		i = 0;

	if (argc != 2)
		write(1, "wrong number of arguments", 25);
	else
		while (argv[1][i])
		{
			char	c = argv[1][i];
			if (c >= 'a' && c <= 'z')
				c = 'z' - (c - 'a');
			write(1, &c, 1);
			i++;
		}
	write(1, "\n", 1);
	return (0);
}