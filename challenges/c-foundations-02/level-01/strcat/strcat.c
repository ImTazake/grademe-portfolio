char	*strcat(char *dst, const char *src)
{
	int i = 0;
	while (dst[i])
		i++;
	int j = 0;
	while (src[j])
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[i] = '\0';
	return (dst);
}
