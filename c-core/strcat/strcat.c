char	*strcat(char *dst, const char *src)
{
	int i = 0;
	int j = 0;

	while(dst[i])
		i++;
	while(src[j])
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[i] = '\0';
	return dst;
}
