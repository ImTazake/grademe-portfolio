#include <stdint.h>
#include <stddef.h>

int	checked_size(size_t n, size_t size, size_t *out)
{
	if (n == 0)
	{
		*out = 0;
		return (1);
	}
	if (size > SIZE_MAX / n)
		return (0);
	*out = n * size;
	return (1);
}