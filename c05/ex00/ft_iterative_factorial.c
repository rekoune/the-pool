int	ft_iterative_factorial(int nb)
{
	int	a;

	a = 1;
	if (nb == 0)
		return (0);
	while (nb > 0)
	{
		a = a * nb;
		nb--;
	}
	return (a);
}
#include <stdio.h>
int main ()
{
	int a = ft_iterative_factorial(6);
	printf("%d\n",a);
}
