const char	*skip_spaces(const char *s)
{
	if(s[0] == '\0')
		return (s);
	int i = 0;
	while (s[i] == ' ' || s[i] == '\t')
		i++;
	return (&s[i]);
}