#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		i;
	char	*p;
	i = 0;
	while (src[i] != 0)
		i++;
	p = malloc(i * sizeof(char));
	i = 0;
	while (src[i] != 0)
	{
		p[i] = src[i];
		i++;
	}
	if (p == 0)
		return (0);
	return (p);
}
#include <stdio.h>

int main ()
{
	char c[] = "abdellah rekoune";
	char *p = ft_strdup(c);
	printf("%s",p);
}
