#include <unistd.h>

int	main(int argc, char **argv)
{
	if (argc != 2)
	{
		write(1, "wrong number of arguments\n", 26);
		return (0);
	}
	if (argv[1])
	{
		int i = 0;
		while(argv[1][i] && !(argv[1][i] >= 33 && argv[1][i] <= 126))
			i++;
		while(argv[1][i] && argv[1][i] != ' ' && argv[1][i] != '\t')
		{
			write(1, &argv[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
