int	ft_recursive_power(int nb, int power)
{
//	int a;
//	a = 0;

	if ((nb == 0 && power == 0) || power == 0)
		return (1);
	else if (power < 0)
		return 0;
	//	a = (nb * ft_recursive_power(nb, (power - 1)));
	return (nb * ft_recursive_power(nb, (power - 1)));
}
#include <stdio.h>

int main ()
{
	int a = 83;
	int b = 0;
	int c = ft_recursive_power(a, b);
	printf("%d",c);
}

