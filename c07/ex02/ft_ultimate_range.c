#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	nb;

	i = 0;
	nb = max - min;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	*range = malloc(nb * sizeof(int));
	if (!(*range))
		return (-1);
	while (i < nb)
	{
		*(*range + i) = min + i;
		i++;
	}
	return (nb);
}
#include <stdio.h>

int main () 
{
	int i;
	int *j;
	int a = ft_ultimate_range(&j, 8, 7);

	i = 0;
	printf("%d\n",a);
	while (i < 7 - 8)
	{
		printf("%d",j[i]);
		i++;
	}

}
