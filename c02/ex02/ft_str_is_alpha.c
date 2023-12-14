int ft_str_is_alpha(char *str)
{
    int i;
    int a;

    a =1;
    i = 0;
    if (str[i] == '\0')
    {
        return a;
    }
    while (str[i] != '\0')
    {
        if ((str[i] >= 'a' && str[i] <= 'z')|| (str[i] >= 'A' && str[i] <= 'Z'))
        {

            a = 1;
        }
        else
        {
            a = 0;
                return a;
        }
        i++;
    }
    return a;
}
#include <stdio.h>

int main ()
{
    char c[] = "8";
    int x;
    x = ft_str_is_alpha(c);
    printf("%d\n",x);
}
