int max(int *arr, unsigned int len)
{
	if(len < 1)
		return 0;
	int value = arr[len - 1];
	
	while(len > 1)
	{
		len--;
		if (value < arr[len - 1])
			value = arr[len - 1];
	}
	return value;
}
