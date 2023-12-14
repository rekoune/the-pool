/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arekoune <arekoune@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 09:43:16 by arekoune          #+#    #+#             */
/*   Updated: 2023/10/03 12:32:52 by arekoune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	i;

	i = 1;
	while (i <= nb / i)
	{
		if (i * i == nb )
			return (i);
		i++;
	}
	return (0);
}
#include <stdio.h>

int main ()
{
	int  a = ft_sqrt(-4);
	printf("%d",a);
}
