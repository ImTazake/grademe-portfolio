#include <unistd.h>

void rot_13(char *str)
{
	int i = 0;
	while(str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = (str[i] - 'a' + 13) % 26 + 'a';
		else if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = (str[i] - 'A' + 13) % 26 + 'A';
		i++;
	}
}

int	main(int argc, char **argv)
{
	if (argc != 2)
	{
		write(1, "wrong number of arguments\n", 26);
		return 0;
	}
	rot_13(argv[1]);

	int i = 0;
	while(argv[1][i])
		write(1, &argv[1][i++], 1);
	write(1, "\n", 1);

	return (0);
}
