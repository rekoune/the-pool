/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arekoune <arekoune@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 18:24:45 by arekoune          #+#    #+#             */
/*   Updated: 2023/09/28 10:02:11 by arekoune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	lend;
	unsigned int	lens;

	i = 0;
	j = 0;
	while (src[i] != '\0')
		i++;
	lens = i;
	while (dest[j] != '\0')
		j++;
	lend = j;
	if (size == 0 || size <= lend)
		return (lens + size);
	i = 0;
	while (src[i] != '\0' && i < size - lend - 1)
		{
			dest[j] = src[i];
			i++;
			j++;
		}
	dest[j] = '\0';
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
