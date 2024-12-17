#include <stdio.h>

void ft_putchar();


int main(int argc, char *argv[])
{

	if (argc == 1)
	{
		printf("no hay argumentos\n");
	}
	else
	{
		printf("argumentos: \n");
	}
	for (int i = 0; i < argc; i++)
	{
		printf("arg %d: %s\n", i, argv[i]);
	}
	return (0);
}
