#include <unistd.h>

// greet prints three fixed lines and ignores its command line.
// The lines are already correct: make the file build.
int	main()
{
	int	fd = 1;

	write(fd, "hello, world\n", 13);
	write(fd, "greet v1.0\n", 11);
	write(fd, "ready\n", 6);
}
