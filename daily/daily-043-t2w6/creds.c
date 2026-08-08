int	ft_strcmp(const char *s1, const char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}

int	is_default(const char *user, const char *pass)
{
	if ((!ft_strcmp(user, "root") && !ft_strcmp(pass, "root"))
		|| (!ft_strcmp(user, "admin") && !ft_strcmp(pass, "admin"))
		|| (!ft_strcmp(user, "root") && !ft_strcmp(pass, "12345"))
		|| (!ft_strcmp(user, "admin") && !ft_strcmp(pass, "password")))
		return (1);
	return (0);
}