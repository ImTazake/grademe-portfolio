#include <unistd.h>

void ft_putnbr(int nb)
{
	if(nb / 10 != 0)
		ft_putnbr(nb / 10);
	write(1, &"0123456789"[nb % 10], 1);
}

int	main()
{
	int i = 1;

	while(i <= 100)
	{
		if (i % 3 == 0 && i % 5 == 0)
			write(1, "FizzBuzz", 8);
		else if (i % 3 == 0)
			write(1, "Fizz", 4);
		else if (i % 5 == 0)
			write(1, "Buzz", 4);
		else
			ft_putnbr(i);
		write(1, "\n", 1);
		i++;
	}
	return 0;
}
