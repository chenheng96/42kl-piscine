/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchong <cchong@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 10:34:23 by cchong            #+#    #+#             */
/*   Updated: 2022/02/28 10:34:25 by cchong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*str;
	int		i;

	i = 0;
	while (src[i] != 0)
		i++;
	str = malloc(sizeof(char) * (i + 1));
	i = 0;
	while (src[i] != 0)
	{
		str[i] = src[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}
