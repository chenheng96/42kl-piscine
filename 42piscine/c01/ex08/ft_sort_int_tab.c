/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchong <cchong@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 09:37:28 by cchong            #+#    #+#             */
/*   Updated: 2022/02/17 10:21:33 by cchong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_swap(int *a, int *b);

void	ft_sort_int_tab(int *tab, int size)
{
	int	index1;
	int	index2;

	index1 = 0;
	while (index1 < size - 1)
	{
		index2 = 0;
		while (index2 < size - index1 - 1)
		{
			if (tab[index2] > tab[index2 + 1])
				ft_swap(&tab[index2], &tab[index2 + 1]);
			index2++;
		}
		index1++;
	}
}

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
