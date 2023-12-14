/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arekoune <arekoune@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 10:19:43 by arekoune          #+#    #+#             */
/*   Updated: 2023/09/27 10:21:12 by arekoune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	chek(char *str, char *to_find)
{
	int	i;

	i = 0;
	while (str[i] == to_find[i] && to_find[i] != '\0')
		i++;
	return (i);
}

int	size(char *find)
{
	int	i;

	i = 0;
	while (find[i] != '\0')
		i++;
	return (i);
}

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;
	int	fsz;

	i = 0;
	fsz = size(to_find);
	if (to_find[i] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		j = 0;
		if (str[i] == to_find[j])
		{
			j = chek(&str[i], &to_find[j]);
			if (j == fsz)
				return (&str[i]);
		}
		i++;
	}
	return (0);
}
