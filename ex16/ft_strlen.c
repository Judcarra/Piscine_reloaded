#include <stdio.h>

int ft_strlen(char *str)
{
	int i;
	int len;

	i = 0;
	len = 0;
	while (str[i] != '\0')
	{
		i++;
		len++;
	}
	return (len);
}

int	main()
{
	char str[] = "hola";
	int count = ft_strlen(str);

	printf("len: %i\n", count);
	return (0);
}
