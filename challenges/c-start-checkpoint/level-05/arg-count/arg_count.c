#include <unistd.h>

void	putnbr(int nb)
{
	if(nb / 10)
		putnbr(nb / 10);
	write(1, &"012345689"[nb % 10], 1);
}

int	main(int argc, char **argv)
{
	putnbr(argc - 1);
	write(1, "\n", 1);
	(void)argv;
	return (0);
}
