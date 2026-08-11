#include <stdlib.h>
char *strdup(const char *src)
{
	
	int i = 0;
	while(src[i])
		i++;
	char *copy;
	copy = malloc(sizeof(char) * i + 1);
	if(!copy)
		return NULL;
	i = 0;
	while(src[i])
	{
		copy[i] = src[i];
		i++;
	}
	copy[i] = '\0';
	return copy;
}
