int	chek(char *base)
{
	int	i;
	int	j;

	 i = 0;
	if (base[i] == 0 || base[i + 1] == 0)
		return (0);
	while (base[i] != 0)
	{
		j = i + 1;
		while (base[j] != 0)
		{
			if (base[j] == base [i])
				return (0);
			j++;
		}
		i++;
	}
	i = 0;
	while (base[i] != 0)
	{
		if (base[i] == '-' || base [i] == '+' || (base[i] >= 9 && base[i] <= 13) || base[i] == 32)
			return (0);
		i++;
	}
	return (1);
}

int	len(char *base)
{
	int	i;

	i = 0;
	while (base[i] != '\0')
		i++;
	return (0);
}

int	chek2(char *str , char *base)
{
	int	i;

	i = 0;
	while(base[i] != '\0')
	{
		if (str[0] == base [i])
			return (1);
		i++;
	}
	return (i);
}

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	nm;
	int	lenb;
	int	nb;
	int	j;

	i = 0;
	nm = 0;
	nb = 0;
	j = 0;
	lenb = len(base);
	while (str[i] != 0 && chek(base) == 1)
	{
		if ((str[i] >= 9 && str[i] <= 13 ) || str[i] == 32)
			i++;
		else if (str[i] == '-' || str[i] == '+')
		{
			if (str[i] == '-')
				nm++;
			i++;
		}
		else if ( chek2(&str[i], base) == 1)
		{
			nb = nb * lenb;
			j = 0;
			while(base[j] != 0)
			{
				if (base[j] == str[i])
					nb = nb + j;
				j++;
			}
			i++;
		}
		i++;
	}
	if ((nm % 2) == 0)
		return (nb);
	else
		return (-nb);
}
#include <stdio.h>

int main ()
{
	char a[] = "--7f";
	char b[] = "0123456789abcdef";
	int c;

	c = ft_atoi_base(a, b);
	printf("%d\n",c);
}
