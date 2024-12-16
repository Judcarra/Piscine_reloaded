#include <stdio.h>

int ft_sqrt(int nb)
{
	int i;
	
	i = 1;
	if (nb == 0)
	{
		return (0);
	}
	while (i * i < nb)
	{
		i++;
	}
	if ((nb % i) == 0)
	{
		return (i);
	}
	else
	{
		return (0);
	}
}

int main()
{
	int nb = 36;
	int result = ft_sqrt(nb);

	printf("result: %i\n", result);
	return (0);
}
