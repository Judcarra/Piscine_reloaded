#include <stdlib.h>
#include <stdio.h>

char	*strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

size_t	strlen(char *str)
{
	size_t	len;

	len = 0;
	while(*str != '\0')
	{
		len++;
		str++;
	}
	return (len);
}

char	*ft_strdup(char *str)
{
	size_t	size;
	char	*copia;

	size = strlen(str);
	copia = malloc(size + 1);
	if (copia == NULL)
    	{
        	return (NULL);
    	}
	strcpy(copia, str);
	return (copia);
}
/*
int main() 
{
    char *original = "hola buenas!";
    char *copia = ft_strdup(original);

    if (copia == NULL)
    {
        printf("failed\n");
        return 1;
    }

    printf("Original: %s\n", original);
    printf("Copia: %s\n", copia);

    free(copia);

    return 0;
}*/
