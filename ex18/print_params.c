#include <stdio.h>

int main(int argc, char **argv)
{
	int i;

	i = 0;
	while (i < argc - 1)
	{
		i++;
		printf("argument %i: %s\n", i, argv[i]);
	}
	return (0);
}
