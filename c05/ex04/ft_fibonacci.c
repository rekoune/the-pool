int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	else if (index == 1 || index == 2)
		return (1);
	else if (index == 0)
		return (0);
	return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}
#include <stdio.h>
int main ()
{
	int a;
	a = ft_fibonacci(1);
	printf("%d",a);
}
