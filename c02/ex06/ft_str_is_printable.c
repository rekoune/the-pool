int ft_str_is_printable(char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
    {
        if (str[i] >= 32 && str[i] <= 126)
            i++;
        else
            return 0;
    }
        return 1;
}
#include <stdio.h>
int main ()
{
    char c[] = "abdel\nlah";
    char d[] = "\n";
    char e[] = "4901";
    char f[] = "&*$^*:L:";
    int a = ft_str_is_printable(c);
    printf("%d\n",a);
    a = ft_str_is_printable(d);
    printf("%d\n",a);
    a = ft_str_is_printable(e);
    printf("%d\n",a);
    a = ft_str_is_printable(f);
    printf("%d\n",a);
}
