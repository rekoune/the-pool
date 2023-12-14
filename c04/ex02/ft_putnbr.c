#include <unistd.h>

void	display(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	int		i;
	char	c[11];

	i = 0;
	if (nb == -2147483648)
		write(1, "-2147483648", 11);
	else if (nb < 0)
	{
		display('-');
		nb = -nb;
	}
	while (nb > 9)
	{
	   	c[i] = (nb % 10) + 48;
		nb = nb / 10;
		i++;
	}
	i--;
	if (nb >= 0 && nb <= 9)
		display(nb + 48);
	while (i >= 0)
	{
		display(c[i]);
		i--;
	}
}
int main ()
{
	ft_putnbr(2147483647);
}
