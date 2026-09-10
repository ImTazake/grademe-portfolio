#include <stddef.h>

void	swap_str(char **a, char **b)
{
	if	(a == NULL || b == NULL)
		return;
	char *temp = *a;
	*a = *b;
	*b = temp;
}
