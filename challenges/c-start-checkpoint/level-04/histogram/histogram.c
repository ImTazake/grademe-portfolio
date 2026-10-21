#include <stdlib.h>
#include <unistd.h>

void	histogram(int argc, char **argv)
{
	int	i;
	int	j;
	int	value;

	i = 1;
	while (i < argc)
	{
		value = atoi(argv[i]);
		j = 0;
		while (j < value)
		{
			write(1, "#", 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 1)
		write(1, "wrong number of arguments\n", 26);
	else
		histogram(argc, argv);
	return (0);
}