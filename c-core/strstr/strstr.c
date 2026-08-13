char	*strstr(const char *haystack, const char *needle)
{
	const char	*start;
	const char	*s;
	const char	*f;

	if (needle[0] == '\0')
		return ((char *)haystack);
	start = haystack;
	while (*start)
	{
		s = start;
		f = needle;
		while (*s == *f && *f)
		{
			s++;
			f++;
		}
		if (*f == '\0')
			return ((char *)start);
		start++;
	}
	return (0);
}
