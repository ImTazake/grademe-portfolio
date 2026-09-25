int atoi(const char *str)
{
	int index = 0;
	int sign = 1;
	int number = 0;

	while (str[index] == ' ' || str[index] == '\t')
		index++;
	if (str[index] == '+' || str[index] == '-')
	{
		if (str[index] == '-')
			sign = -1;
		index++;
	}
	while (str[index] >= '0' && str[index] <= '9')
	{
		number = number * 10 + (str[index] - '0');
		index++;
	}	
	return (sign * number);
}
