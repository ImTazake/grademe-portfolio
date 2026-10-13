#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

void	calc(int a, char *sign, int b)
{
	if (*sign == '+')
		printf("%d\n", a + b);
	else if (*sign == '-')
		printf("%d\n", a - b);
	else if (*sign == '/')
		printf("%d\n", a / b);
	else if (*sign == '*')
		printf("%d\n", a * b);
	else if (*sign == '%')
		printf("%d\n", a % b);
}

int	main(int argc, char **argv)
{
	if (argc != 4)
		write(1, "wrong number of arguments\n", 26);
	else
		calc(atoi(argv[1]), argv[2], atoi(argv[3]));
	return (0);
}