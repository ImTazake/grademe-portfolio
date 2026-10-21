#include <stdlib.h>
#include <unistd.h>

void	line(int line, char corner, char center)
{
	int current = 1;

	while (current <= line)
	{
		if (current == 1)
			write(1, &corner, 1);
		else if (line == current)
			write(1, &corner, 1);
		else
			write(1, &center, 1);
		current++;
	}
 	
}

void	box(int strip, int column)
{
	int current = 1;

	while (current <= column && strip > 0)
	{
		if (current == 1)
			line(strip, '+', '-');
		else if (column == current)
			line(strip, '+', '-');
		else
			line(strip, '|', ' ');
		write(1, "\n", 1);
		current++;
	}
}

int	main(int argc, char **argv)
{
	if (argc != 3) 
		write(1, "wrong number of arguments\n", 26);
	else
		box(atoi(argv[1]), atoi(argv[2]));
	return (0);
}
