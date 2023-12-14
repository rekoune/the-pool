char    *ft_strncpy(char *dest, char *src, unsigned int n)
{
    unsigned int    i;

    i = 0;
    while (i < n && src[i] != '\0')
    {
        dest[i] = src[i];
        i++;
    }
    while (i < n )
    {
        dest[i] = '\0';
        i++;
    }
    return (dest);
}
#include <stdio.h>
int main ()
{
    char d[20];
    char s[] = "abdellah";
    int n = 4;
    char *p;
    p = ft_strncpy(d, s, n);
    printf("%s\n",p);
}

