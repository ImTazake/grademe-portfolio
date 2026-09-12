#include <stddef.h>

void	prefix_sum(const int *a, size_t n, long *out)
{
	size_t	current = 0;
	long	sum = 0;

	while (current < n)
	{
		sum += a[current];
		out[current] = sum;
		current++;
	}
}
