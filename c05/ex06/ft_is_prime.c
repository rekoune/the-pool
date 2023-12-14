int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb == 0 || nb == 1)
		return (0);
	while (i <= nb / i)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}
#include <stdio.h>

int main ()
{
	int a = ft_is_prime(2147483647);
	printf("%d",a);
}
