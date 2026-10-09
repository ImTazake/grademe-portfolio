char	*gm_strncat(char *dst, const char *src, unsigned int n)
{
	unsigned int	i = 0;
	unsigned int	j = 0;

	while (dst[i])
		i++;
	while (src[j] && j < n)
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[i] = '\0';
	return (dst);
}