/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchong <cchong@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 09:47:38 by cchong            #+#    #+#             */
/*   Updated: 2022/02/11 12:11:15 by cchong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	condition_1(int k)
{
	if (k < '7')
	{
		write (1, ",", 1);
		write (1, " ", 1);
	}
	else
	{
		write (1, "\n", 1);
	}
}

void	ft_print_comb(void)
{
	char	n;
	char	i;
	char	j;

	n = '0';
	while (n <= '9')
	{
		i = n + 1;
		while (i <= '9')
		{
			j = i + 1;
			while (j <= '9')
			{
				write (1, &n, 1);
				write (1, &i, 1);
				write (1, &j, 1);
				condition_1(n);
				j++;
			}
			i++;
		}
		n++;
	}
}
