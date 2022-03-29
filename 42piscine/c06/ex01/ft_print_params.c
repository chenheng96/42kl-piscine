/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchong <cchong@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 10:25:58 by cchong            #+#    #+#             */
/*   Updated: 2022/02/28 10:26:06 by cchong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	int	j;

	i = argc;
	j = 1;
	while (i > 1)
	{
		while (*argv[j] != '\0')
		{
			write (1, argv[j], 1);
			argv[j]++;
		}
		write (1, "\n", 1);
		i--;
		j++;
	}
}
