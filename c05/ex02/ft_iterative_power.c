int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	a;

	i = 0;
	a = 1;
	if (power < 0)
		return (0);
	else if (nb == 0 && power == 0)
		return (1);
	while (power > i)
	{
		a = a * nb;
		i++;
	}
	return (a);
}
#include <stdio.h>

int main ()
{
	int a;

	a = ft_iterative_power(0, 0);
	printf("%d",a);
}
