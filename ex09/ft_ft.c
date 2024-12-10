#include <stdio.h>

void ft_ft(int *nbr)
{
	*nbr = 42;
}

int main()
{
	int *ptr;
	int value;

	ptr = &value;
	ft_ft(ptr);
	printf("%i\n", *ptr);
	return (0);
}
