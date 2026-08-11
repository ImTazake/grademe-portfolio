#include <stdlib.h>

int	is_delim(char c, char *delim)
{
	int	i;

	i = 0;
	while (delim[i])
	{
		if (c == delim[i])
			return (1);
		i++;
	}
	return (0);
}

int	count_words(char *str, char *delim)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i])
	{
		while (str[i] && is_delim(str[i], delim))
			i++;
		if (str[i])
			count++;
		while (str[i] && !is_delim(str[i], delim))
			i++;
	}
	return (count);
}

char	*get_word(char *str, char *delim, int *pos)
{
	int		start;
	int		len;
	int		i;
	char	*word;

	while (str[*pos] && is_delim(str[*pos], delim))
		(*pos)++;
	start = *pos;
	while (str[*pos] && !is_delim(str[*pos], delim))
		(*pos)++;
	len = *pos - start;
	word = malloc(sizeof(char) * (len + 1));
	if (!word)
		return (NULL);
	i = 0;
	while (i < len)
	{
		word[i] = str[start + i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

char	**split(char *str, char *delim)
{
	char	**result;
	int		count;
	int		i;
	int		pos;

	count = count_words(str, delim);
	result = malloc(sizeof(char *) * (count + 1));
	if (!result)
		return (NULL);
	i = 0;
	pos = 0;
	while (i < count)
	{
		result[i] = get_word(str, delim, &pos);
		if (!result[i])
			return (NULL);
		i++;
	}
	result[i] = NULL;
	return (result);
}
