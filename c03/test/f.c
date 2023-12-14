unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	lens;
	unsigned int	lend;

	i = 0;
	j = 0;

	while (src[i] != 0)
		i++;
	lens = i;
	while (dest[j] != 0)
		j++;
	lend = j;
	if (size == 0 || size <= lend)
		return (lens + size);
	i = 0;
	while (src[i] != 0 && i < size - lend - 1)
	{
		dest[j] = src[i];
		i++;
		j++;
	}
	dest[j] = 0;
	return (lend + lens);
}
#include <stdio.h>

int main ()
{
	char a[100] ="abdellah";
	char b[] ="";
	int size = 3;
	int c;
	c = ft_strlcat(a, b, size);
	printf("%d\n",c);
	printf("%s\n",a);
}
