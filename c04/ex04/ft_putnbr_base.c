#include <unistd.h>

int	chek(char *base)
{
	int	i;
	int j;
	
	i = 0;
	if (base[i] == 0 || base[i + 1] == 0)
		return (0);
	while(base[i] != 0)
	{
		j = i + 1;
		while (base[j] != 0)
		{
			if (base[j]  == base[i])
				return (0);
			j++;
		}
		i++;
	}
	i = 0;
	while(base[i] != 0)
	{
		if(base[i] == '-' || base[i] == '+')
			return (0);
		i++;
	}
	return (1);
}

int	lend(char *base)
{
	int	i;

	i = 0;
	while (base[i] != 0)
		i++;
	return (i);
}

void	display(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int		i;
	long	nb;
	int		lenb;
	char	c[33];

	i = 0;
	nb = nbr;
	lenb = lend(base);
	if (nb == 0 && chek(base) == 1)
		display(base[0]);
	if (nb < 0 && chek(base) == 1)
	{
		display ('-');
		nb = -nb;
	}
	while (nb > 0 && chek(base) == 1)
	{
		c[i] = base[nb % lenb];
		nb = nb / lenb;
		i++;
	}
	while (i-- >= 0 && chek(base) == 1)
	{
		display(c[i]);
	}
}
int main ()
{
	 ft_putnbr_base(-0, "89j");
}
