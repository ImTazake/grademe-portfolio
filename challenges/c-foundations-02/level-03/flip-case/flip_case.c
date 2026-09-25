#include <unistd.h>

void	flip_case(char *str);

int	main(int argc, char **argv)
{
	if (argc != 2)
		write (1, "wrong number of arguments\n", 26);
	else
		flip_case(argv[1]);
	return (0);
}

void	flip_case(char *str)
{
	int i = 0;

	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
		else if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		write (1, &str[i], 1);
		i++;
	}
	write (1, "\n", 1);
}