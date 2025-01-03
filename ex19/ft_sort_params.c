#include <unistd.h>
#include <string.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void    ft_putstr(char *str)
{
    int i = 0;
    while (str[i] != '\0')
    {
        ft_putchar(str[i]);
        i++;
    }
}

void    ft_swap(char **s1, char **s2)
{
    char *temp;

    temp = *s1;
    *s1 = *s2;
    *s2 = temp;
}

int     ft_strcmp(char *s1, char *s2)
{
    while (*s1 && *s1 == *s2)
    {
        s1++;
        s2++;
    }
    return (*s1 - *s2);
}

int main(int argc, char *argv[])
{
    int i;
    int j;

    i = 1;
    while (i < argc -1)
    {
        j = 1;
        while (j < argc - i)
        {
            if (ft_strcmp(argv[j], argv[j + 1]) > 0)
            {
                ft_swap(&argv[j], &argv[j + 1]);
            }
            j++;
        }
        i++;
    }

    i = 1;
    while (i < argc)
    {
        ft_putstr(argv[i]);
        ft_putchar('\n');
        i++;
    }

    return (0);
}

