#include <unistd.h>

void	display(char	c)
{
	write(1, &c, 1);
}

void	ft_putstr_non_printable(char *str)
{
	char	*c = "0123456789abcdef";
	int 	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 0 && str[i] <= 31) || str[i] >= 127)
		{
			display('\\');
			display(c[str[i] / 16]);
			display(c[str[i] % 16]);
		}
		else
			display(str[i]);
		i++;
	}
}
int main ()
{
	char g[] = "Coucou\ntu vas b\nien ?";
	    ft_putstr_non_printable(g);
}
