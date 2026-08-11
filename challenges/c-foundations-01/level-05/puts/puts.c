#include <unistd.h>

int	puts(const char *s)
{
	if(!s)
	return -1;

	int i = 0;
	while(s[i])
	{
		write(1, &s[i], 1);
		i++;
	}
	write(1, "\n", 1);
	return i;
}
