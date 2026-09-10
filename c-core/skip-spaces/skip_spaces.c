// Return the address of the first character of s that is not a space or a tab.
// Only the leading run is skipped, and the buffer is never written to.
char	*skip_spaces(char *s)
{
	if(s[0] == '\0')
		return (s);
	int i = 0;

	while (s[i] == ' ' || s[i] == '\t')
		i++;
	return (&s[i]);
}
