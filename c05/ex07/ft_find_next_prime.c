int	ft_is_prime(int nb)
{
	int	i;
	
	i = 2;
	if (nb == 0 || nb == 1)
		return (0);
	while (i <= nb / i)
	{
		if ( nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	int	a;

	a = ft_is_prime(nb);
	if (a == 1)
		return (nb);
	else
		return (ft_find_next_prime(nb + 1));
}
#include <stdio.h>
int main ()
{
	int a = ft_find_next_prime(147483648);
	printf("%d",a);
}
