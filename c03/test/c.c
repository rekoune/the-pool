int	chek(char *str, char *to_find)
{
	int i;

	i = 0;
	while(str[i] == to_find[i] && to_find != '\0')
		i++;
	return (i);
}

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int j;
	int sz;

	i = 0;
	sz =0;
	if (to_find[0] == 0)
		return (str);
	while (to_find[sz] != '\0')
		sz++;
	while (str[i] != 0)
	{
		j = 0;
		if (str[i] == to_find[j])
		{
			j = chek(&str[i], &to_find[j]);
			if (sz == j)
				return (&str[i]);
		}
		i++;
	}
	return (0);
}
#include <stdio.h>

int main ()
{
	char str[] = "abdellah";
	char find[] = "abdf";
	char *a ;
	a = ft_strstr(str, find);
	printf("%s\n",a);
}
