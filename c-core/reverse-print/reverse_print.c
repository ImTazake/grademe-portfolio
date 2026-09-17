#include <unistd.h>

void	reverse_print(char *str)
{
	int i = 0;
	while (str[i])
		i++;
	while(i-- > 0)
		write(1, &str[i], 1);
}

int	main(int argc, char **argv)
{
	if (argc != 2)
	{
		write(1, "wrong number of arguments\n", 26);
		return (0);
	}
	reverse_print(argv[1]);
	write(1, "\n", 1);
	return (0);
}
