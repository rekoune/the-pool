int	nb(char *dest)
{
	int	i;

	i = 0;
	while (dest[i] != '\0')
		i++;
	return i;
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = nb(dest);
	while (src[i] != '\0')
	{
		dest[j] = src[i];
		j++;
		i++;
	}
	dest[j] = '\0';
	return (dest);
}
#include <stdio.h>
#include <string.h>
int main ()
{
	char c[9] = "abde";
	char f[] = "llah";
	char g[9] = "ABDE";
	char h[] = "LLAH";
	char *j = ft_strcat(c, f);
	char *a = strcat(g, h);
	printf("%s\n",j);
	printf("%s\n",a);
}
