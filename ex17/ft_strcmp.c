#include <stdio.h>
#include <string.h>

int ft_strcmp(char *s1, char *s2)
{
	while (*s1 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return *s1 - *s2;
}


int main()
{
	char s1[] = "iola";
	char s2[] = "hola";
	int result = ft_strcmp(s1, s2);

	printf("res: %i\n", result);
	return (0);
}
