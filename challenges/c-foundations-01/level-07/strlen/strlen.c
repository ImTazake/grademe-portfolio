#include <stddef.h>

size_t	strlen(const char *s)
{
	if(!s || s[0] == '\0')
	return 0;
	int i = 0;
	while(s[i])
		i++;
	return i;
}
