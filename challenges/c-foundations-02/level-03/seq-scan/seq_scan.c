#include <unistd.h>

int ft_strlen(char *str)
{
	int i = 0;
	while(str[i])
		i++;
	return i;
}

char	ft_tolower(char c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	return (c);
}

int ft_scan(char *cmp, char *str)
{
	int i = 0;
	int check = 0;
	int len = ft_strlen(cmp);
	while(cmp[i])
	{
		while(str[check])
		{
			if(ft_tolower(str[check]) == ft_tolower(cmp[i]))
			{
				len--;
				i++;
			}
			check++;
			if(len == 0)
				return 1;
		}
		return 0;
	}
	return 1;
}

int	main(int argc, char **argv)
{
	if (argc != 3)
	{
		write(1, "wrong number of arguments\n", 26);
		return 0;
	}
	if (ft_scan(argv[1],argv[2]) == 1)
		write(1, argv[1], ft_strlen(argv[1]));
	write(1, "\n", 1);
	return 0;
}
