#include <unistd.h>
#include <stdlib.h>

int *ft_range(int min, int max)
{
    if (min >= max)
    {
        return NULL;
    }

    int *arr = malloc((max - min) * sizeof(int));
    if (arr == NULL) 
    {
        return NULL;
    }

    int i = 0;

    while (min < max)
    {
        arr[i] = min;
        i++;
        min++;
    }

    return arr;
}
/*
int main()
{
    int min = 0;
    int max = 9;
    int *arr = ft_range(min, max);

    int i = 0;
    while (i < (max - min))
    {
        printf("%i\n", arr[i]);
        i++;
    }

    free(arr);
    return 0;
}*/
