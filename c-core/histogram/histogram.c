#include <stdlib.h>
#include <unistd.h>

void	histogram(char *args)
{
	int i = atoi(args);
	while (i-- > 0)
		write(1, "#", 1);
	write(1, "\n", 1);
}
int	main(int argc, char **argv)
{
	if(argc < 2)
	{
		write(1, "wrong number of arguments\n", 26);
		return (0);
	}
	int i = 0;
	while (++i < argc)
		histogram(argv[i]);
	return (0);
}
