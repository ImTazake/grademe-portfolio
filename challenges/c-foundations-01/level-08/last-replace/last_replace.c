#include <unistd.h>

int ft_size_check(char *c)
{
	if(!c || c[0] == '\0')
		return 0;
	int i = 0;
	while(c[i])
		i++;
	return i;
}

void ft_last_replace(char *str, char *target, char *replace)
{
	int index = 0;
	int count = 0;

	while(str[index])
	{
		if(str[index] == target[0])
			count++;
		index++;
	}

	index = 0;
	int rep = 0;

	while(str[index])
	{
		if(count == 0)
		{
			write(1, &str[index], 1);
		}
		else if (str[index] == target[0])
		{
			rep++;
			if (rep == count)
			{
				write(1, &replace[0], 1);
				rep++;
			}
			else
				write(1, &str[index], 1);
		}
		else
				write(1, &str[index], 1);
		index++;
	}
}

int	main(int argc, char **argv)
{
	if(argc != 4)
	{
		write(1, "wrong number of arguments\n", 26);
		return 0;
	}
	if(ft_size_check(argv[2]) != 1 || ft_size_check(argv[3]) != 1)
	{
		write(1, "\n", 1);
		return 0;
	}
	ft_last_replace(argv[1],argv[2],argv[3]);
	write(1, "\n", 1);
	
	return (0);
}
