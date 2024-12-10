#include <stdio.h>

void ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

int main()
{
	int a;
	int b;
	int *div = &a;
	int *mod = &b;

	a = 14;
	b = 3;
	ft_div_mod(a, b, div, mod);
	printf("div: %i\n", *div);
	printf("mod: %i\n", *mod);
	return (0);
}
