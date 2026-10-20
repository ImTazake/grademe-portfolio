#include <stdlib.h>
#include <stdio.h>

int	divisible(int nb, int div)
{
	if(nb % div != 0)
		return 0;
	return 1; 
}

void	gcd(int a, int b)
{
	int div = 1;
	int greater;

	while(div < a && div < b)
	{
		if(divisible(a, div) == 1 && divisible(b, div) == 1)
			greater = div;
		div++;
	}
		
	printf("%d", greater);
}

int	main(int argc, char **argv)
{
	if(argc != 3)
		printf("wrong number of arguments");
	else
		gcd(atoi(argv[1]),atoi(argv[2]));
	printf("\n");
	return (0);
}
