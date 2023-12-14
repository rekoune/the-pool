unsigned int    ft_strlcpy(char *dest, char *src, unsigned int size)
{
    int i;
    unsigned int    a;

    i = 0;
    a = 0;
    while (src[i] != '\0')
        i++;
    if (size != 0)
    {
        while (src[a] != '\0' && a < (size - 1))
        {
            dest[a] = src[a];
            a++;
        }
        dest[a] = '\0';
    }
    return i;
}
#include <stdio.h>

int main ()
{
    char c[] = "abdellah rekoune";
    char d[28];
    int s = 0;
    int b = ft_strlcpy(d, c, s);
    printf("size = %d\n",b);
    printf("%s \n",c);
    printf("%s",d);
}
