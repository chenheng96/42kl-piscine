/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchong <cchong@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 16:47:06 by cchong            #+#    #+#             */
/*   Updated: 2022/02/16 18:35:24 by cchong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	temp;
	int	x;
	int	y;

	x = 0;
	y = size - 1;
	while (x < size / 2)
	{
		temp = tab[x];
		tab[x] = tab[y];
		tab[y] = temp;
		x++;
		y--;
	}
}
