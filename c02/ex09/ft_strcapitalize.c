void	lower_case(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		{
			if (str[i] >= 'A' && str[i] <= 'Z')
				str[i] += 32;
			i++;
		}
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	nf;
	
	i = 0;
	nf = 1;
	lower_case(str);
	while (str[i] != '\0')
	{
		if ((str[i] >= 'a' && str[i] <= 'z') && nf == 1)
		{
			str[i] -= 32;
			nf = 0;
		}
		else if (!((str[i] >= 'a' && str[i] <= 'z')
					||(str[i] >= 'A' && str[i] <= 'Z')
					||(str[i] >= '0' && str[i] <= '9')))
			nf = 1;
		else if (str[i] >= '0' && str[i] <= '9')
			nf = 0;
		i++;
	}
	return (str);
}
#include <stdio.h>
int main ()
{
	char c[] = "   salut, comment tu vas ? 42mots 89quarante-deux; cinquante+et+un";
	char *a;
	a = ft_strcapitalize(c);
	printf("%s",a);
}
