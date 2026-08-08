#include <unistd.h>

int	main(int argc, char **argv)
{
	int i = 0;
	if ( argc != 2)
	{
		write(1, "wrong number of arguments\n", 26);
		return 0;
	}
	while(argv[1][i])
	{
		if(argv[1][i] == 'n')
		{
			write(1, "n\n", 2);
			return 0;
		}
		i++;
	}
	write(1, "\n", 1);
	return (0);
}
