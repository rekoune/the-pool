int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}
#include <stdio.h>

int main ()
{
	char c[] = "abdellah";
	int a;
	a = ft_strlen(c);
	printf("%d\n",a);
}
