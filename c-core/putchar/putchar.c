#include <unistd.h>

int	putchar(int c)
{
	char ch = (char)c;
	write(1, &ch, 1);
	return (c);
}
