int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while(s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] == s2[i])
			i++;
		else
			return (s1[i] - s2[i]);
	}
	return (s1[i] - s2[i]);
}
#include <stdio.h>
 #include <string.h>

int main()
{
	char c[] = "Abdellah";
	char f[] = "abdellah";
	int i ;
	char b[] = "rekoune";
    char a[] = "Rekoune";
	int j;
	i = ft_strcmp(c, f);
	j = strcmp( b, a);
	printf("%d\n",i);
	printf("%d\n",j);
}
