int	chek(char *str, char *to_find)
{
	int	i;
	
	i = 0;
	while (str[i] == to_find[i] && to_find[i] != '\0')
		i++;
	return (i);
}

int	size(char *find)
{
	int	i;

	i = 0;
	while (find[i] != '\0')
		i++;
	return (i);
}

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;
	int	fsz;

	i = 0;
	fsz = size(to_find);
	if (to_find[i] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		j = 0;
		if (str[i] == to_find[j])
		{
			j = chek(&str[i], &to_find[j]);
			if (j == fsz)
				return (&str[i]);
		}
		i++;
	}
	return 0;
}
#include <stdio.h>
#include <string.h>

int main ()
{
	char c[] = "abddllah";
	char f[] = "abde";
	char b[] = "abddllah";
	char d[] = "abde";
	char *a ;
	char *g;
	a = ft_strstr(c, f);
	printf("%s\n",a);
	g = strstr(b, d);
	printf("%s\n",g);
}
