/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchong <cchong@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 10:34:31 by cchong            #+#    #+#             */
/*   Updated: 2022/02/28 10:34:33 by cchong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*arr;
	int	i;

	i = 0;
	if (min >= max)
		return (NULL);
	arr = malloc(sizeof(int) * (max - min));
	while (min < max)
	{
		arr[i] = min;
		i++;
		min++;
	}
	return (arr);
}
