#include <unistd.h>

void	putnbr(int nb)
{
	if (nb / 10)
		putnbr (nb / 10);
	write (1, &"0123456789"[nb % 10], 1);
}

void	times_table(char *str)
{
	int i = 0;
	while (++i <= 9)
	{
		putnbr (i);
		write (1, " x ", 3);
		write (1, str, 1);
		write (1, " = ", 3);
		putnbr (i * (str[0] - '0'));
		write (1, "\n", 1);
	}
}

int	main(int argc, char **argv)
{
	if (argc != 2)
	{
		write (1, "wrong number of arguments\n", 26);
		return (0);
	}
	times_table(argv[1]);
	return (0);
}
