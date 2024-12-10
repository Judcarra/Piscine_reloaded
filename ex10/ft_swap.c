#include <stdio.h>

void ft_swap(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

int main()
{
       int a;
       int b;

       a = 5;
       b = 10;
       ft_swap(&a, &b);
       printf("a: %i\n", a);
       printf("b: %i\n", b);
       return (0);
}
