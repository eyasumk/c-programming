#include <stdlib.h>
int *ft_range(int start, int end)
{
	int size;
	int *range;
	int i;

	size = 0;
	i = 0;
	if(start <= end)
		size = end - start + 1;
	else
		size = start - end + 1;
	
	range =(int*) malloc(size * sizeof(int));
	if(!range)
		return (NULL);
	if(start <= end)
	{
		while(start <= end)
		{
			range[i] = start;
			start++;
			i++;
		}
	}
	else
	{
		while(start >= end)
		{
			range[i] = start;
			start --;
			i++;
		}
	}
	return (range);
}
