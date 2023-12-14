#include <stdio.h>
#include <string.h>
unsigned int    ft_strlcat(char *dest, char *src, unsigned int size)
{   
    unsigned int    i;
    unsigned int    j;
    unsigned int    lend;
    unsigned int    lens;

    i = 0;
    j = 0;
    while (src[i] != '\0')
        i++;
    lens = i;
    while (dest[j] != '\0')
        j++;
    lend = j;
    i = 0;
     if (size == 0 || size <= lend)
            return (lens + size);
    while (src[i] != '\0' && i < size - lend - 1)
    {
        dest[j] = src[i];
        i++;
        j++;
    }
    dest[j] = '\0';
    return (lend + lens);
}
int main() {
char d[11] = "hello";
char s[] = "world";
char a[11] = "hello";
char b[] = "world";
int j;
printf("F: %d %s \n",ft_strlcat(d, s, 15),d);
j = strlcat(a, b, 15);
printf("T: %d ",j);
printf("%s\n",a);
    return 0;
}
