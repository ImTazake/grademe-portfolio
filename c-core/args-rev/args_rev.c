#include <unistd.h>

int	main(int argc, char **argv)
{
	int i = 1;
	int j = 0;
	if(argc < 2)
		return 0;

	while((argc - i) != 0)
	{
		j = 0;
		while(argv[argc - i][j])
		{
			write(1, &argv[argc - i][j], 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
	return 0;
}
