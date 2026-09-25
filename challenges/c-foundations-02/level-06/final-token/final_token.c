#include <unistd.h>

void	final_token(char *str);

int	main(int argc, char **argv)
{
	if (argc != 2)
		write(1, "wrong number of arguments\n", 26);
	else
		final_token(argv[1]);
	return (0);
}

void	final_token(char *str)
{
	int	i = 0;
	int	end;

	while (str[i])
		i++;
	while (i > 0 && (str[i - 1] == ' ' || str[i - 1] == '\t'))
		i--;
	end = i;
	while (i > 0 && str[i - 1] != ' ' && str[i - 1] != '\t')
		i--;
	while (i < end)
	{
		write(1, &str[i], 1);
		i++;
	}
	write(1, "\n", 1);
}