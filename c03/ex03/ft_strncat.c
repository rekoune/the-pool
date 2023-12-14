int	nbr(char *dest)
{
	int 	i;

	i = 0;
	while (dest[i] != '\0')
		i++;
	return (i);
}

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	int				j;

	i = 0;
	j = nbr(dest);
	while (src[i] != '\0' && i < nb)
	{
		dest[j] = src[i];
		i++;
		j++;
	}
	dest[j] = '\0';
	return (dest);
}
#include <stdio.h>
#include <string.h>
int main ()
{
	char d[16] = "abdellah";
	char s[] = "rekouneabdellahrekoune";
	int a = 7;
	char c[16] = "abdellah";
	char j[] = "rekouneabdellahrekoune";
	char *l = strncat(c, j, a);
	char *e = ft_strncat(d, s, a);
	printf("%s\n",e);
	printf("%s\n",l);
}
