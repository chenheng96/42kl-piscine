/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchong <cchong@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 10:26:13 by cchong            #+#    #+#             */
/*   Updated: 2022/02/28 10:26:14 by cchong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	int	j;

	i = 1;
	j = argc - 1;
	while (i < argc)
	{
		while (*argv[j] != '\0')
		{
			write (1, argv[j], 1);
			argv[j]++;
		}
		write (1, "\n", 1);
		j--;
		i++;
	}
}
