unsigned int lcm(unsigned int a, unsigned int b)
{
	unsigned int i = 1;
	
	if (a == 0 || b == 0)
			return (0);

	while(!(i % a == 0 && i % b == 0))
	{	
		i++;
		if (i % a == 0 && i % b == 0)
			return (i);
	}
	return 0;
}
