#include <stdio.h>

int ft_iterative_factorial(int nb)
{
	int i = 1;
	int result = 1;

	if (nb < 1)
	{
		return (0);
	}
	while (i <= nb)
	{
		result = result * i;
		i++;
	}
	return (result);
}

int main()
{
	int nb = 4;
	int result = ft_iterative_factorial(nb);

	printf("result: %i", result);
	return (0);
}
