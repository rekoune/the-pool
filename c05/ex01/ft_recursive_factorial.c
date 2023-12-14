int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	else
		return nb * ft_recursive_factorial(nb - 1);
}
#include <stdio.h>

int main ()
{
	int a;
	int b;
	a = 5;
	b = ft_recursive_factorial(-1);
	printf("%d",b);
}
