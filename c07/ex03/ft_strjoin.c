/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arekoune <arekoune@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 11:03:25 by arekoune          #+#    #+#             */
/*   Updated: 2023/10/05 14:31:21 by arekoune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	cpy(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i] != 0)
		i++;
	while (src[j] != 0)
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';
}

int	len(char *str)
{
	int	i;

	i = 0;
	while (str[i] != 0)
		i++;
	return (i);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*dest;
	int		i;
	int		lens;

	lens = 0;
	i = 0;
	if (size == 0)
		return ((char *) malloc(sizeof (char)));
	while (i < size)
		lens += len(strs[i++]);
	lens += len(sep) * (size - 1);
	dest = malloc((lens + 1) * sizeof(char));
	if (!(dest))
		return (0);
	dest[0] = '\0';
	i = 0;
	while (i < size)
	{
		cpy(dest, strs[i]);
		if (i < (size - 1))
			cpy(dest, sep);
		i++;
	}
	return (dest);
}
#include <stdio.h>
int main ()
{
	int size = 4;
	char *str1 = "abdellah";
	char *str2 = "rekoune";
	char *str3 = "hamza";
	char *str4 = "aouky";
	char *sep = " |&&| ";
	char *strings[]  = {str1, str2, str3, str4};
	char *p = ft_strjoin(size, strings, sep);

	printf("%s\n",p);
}
