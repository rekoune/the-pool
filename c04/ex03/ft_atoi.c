int	ft_atoi(char *str)
{
	int	i;
	int	nm;
	int nb;

	nb = 0;
	nm = 0;
	i = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			nm++;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		nb = nb * 10;
		nb = nb + (str[i] - 48);
		i++;
	}
	if ((nm % 2) != 0)
		nb = -nb;
	return (nb);

}
#include <stdio.h>
 
int main ()
{
	char	c[] = "      ----------++++++++--2147483647dgdhjdj";
	int i;
	
	i = ft_atoi(c);
	printf("%d\n",i);
}
