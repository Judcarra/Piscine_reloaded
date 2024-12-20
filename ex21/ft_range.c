#include <stdio.h>
#include <stdlib.h>

int *ft_range(int min, int max)
{
	if (min >= max){
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
