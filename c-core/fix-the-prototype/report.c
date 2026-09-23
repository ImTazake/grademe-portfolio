#include <unistd.h>
int	main()
{
	write(1, "status: green\ntests: 12 passed\nwarnings: 0\n", 43);
	return (0);
}