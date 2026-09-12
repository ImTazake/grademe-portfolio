#include <stddef.h>

void	reverse_int(int *a, size_t n)
{
	size_t start = 0;
	if (n == 0)
		return;
	while (start < n - 1)
	{
		int temp = a[start];
		a[start] = a[n - 1];
		a[n - 1] = temp;
		n--;
		start++;
	}
}
