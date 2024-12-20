int ft_count_if(char **tab, int (*f)(char*))
{
	int count = 0;

	while (*tab)
	{
		if (f(*tab) == 1)
		{
			count++;
		}
		tab++;
	}
	return count;
}
