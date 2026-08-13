#include <unistd.h>

int ft_repeat(char *str, int pos)
{
	int i = 0;
	while (pos > i)
	{
		if (str[pos] == str[i])
			return 0;
		i++;
	}
	return 1;
}

void ft_check(char *check, char *str)
{
	int i = 0;
	int j = 0;
	int found;
	while(str[i])
	{
		j = 0;
		found = 0;
		while(check[j])
		{
			if(check[j] == str[i])
				found = 1;
			j++;
		}
		if(found == 1 && ft_repeat(str, i) == 1)
			write(1, &str[i], 1);
		i++;
	}
}

int	main(int argc, char **argv)
{
	if(argc != 3)
	{
		write(1, "wrong number of arguments\n", 26);
		return 0;
	}
	ft_check(argv[1],argv[2]);
	write(1, "\n", 1);
	return 0;
}
