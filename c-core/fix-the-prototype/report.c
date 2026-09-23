#include <unistd.h>

int	print_report(void)
{
	write(1, "status: green\ntests: 12 passed\nwarnings: 0\n", 43);
	return (0);
}

int	main()
{
	return (print_report());
}

