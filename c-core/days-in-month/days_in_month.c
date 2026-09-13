int	days_in_month(int year, int month)
{
	if (month < 1 || month > 12)
		return (-1);
	if (month == 2)
	{
		if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0))
			return (29);
		return (28);
	}
	if (month == 4 || month == 6 || month == 9 || month == 11)
		return (30);
	return (31);
}