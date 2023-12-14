int	chek(char *find, char *str)
{
	int i;
	i = 0 ;
	 
	while (find[i] == str[i] && find != 0)
		i++;
	return i;
}

char	*ft_strstr(char *str, char *to_find)
{
	int i;
	int sz = 0;
	int j;

	i = 0;
	if (to_find == 0)
		return (str);
	while(to_find[sz] != 0)
	   sz++;
	while (str[i] != 0)
	{
		j = 0;
		if (str[i] == to_find[j])
		{
			j = chek(&to_find[j], &str[i]);
			if (j == sz)
				return (&str[i]);
		}
		i++;
	}
	return (0);
}
#include <stdio.h>

int main ()
{
	char a[] = "";
	char b[] = "sa";
	char *c;
	ft_strstr(a, b);
	c = ft_strstr(a, b);
	printf("%s\n",a);
	printf("%s\n",c);
}
