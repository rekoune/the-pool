/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arekoune <arekoune@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 16:52:40 by arekoune          #+#    #+#             */
/*   Updated: 2023/09/19 18:34:04 by arekoune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	reverse;

	i = 0;
	size--;
	while (i <= (size / 2))
	{
		reverse = tab[i];
		tab[i] = tab[size - i];
		tab[size - i] = reverse;
		i++;
	}
}
int main ()
{
  int c[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0, 11, 12, 23 ,67, 65};
  int size = 15;
  ft_rev_int_tab(c,size);
int a;
a = 0 ;
while (a <size)
{
  printf("%d",c[a]);
  a++;
}
}


