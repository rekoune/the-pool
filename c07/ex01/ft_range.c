#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*p;
	int	nb;
	int	i;

	i = 0;
	if (min >= max)
	{
		p = NULL;
		return (p);
	}
	nb = max - min;
	p = malloc(nb * sizeof(int));
	while (i < nb)
	{
		*(p + i) = min + i;
		i++;
	}
	return (p);
}
#include <stdio.h>

int main ()
{
	int i = 0;
	int *a = ft_range(2, 8);
	if (a == NULL)
		printf("empty");
	else
	{
	while (i <= 8)
	{
	printf("%d",a[i]);
	i++;
	}
	}
//	printf("%d",a[5]);
}
