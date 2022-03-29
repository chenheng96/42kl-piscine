/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchong <cchong@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 10:13:45 by cchong            #+#    #+#             */
/*   Updated: 2022/02/23 10:54:36 by cchong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	k;
	int				l;

	i = 0;
	j = 0;
	k = 0;
	l = 0;
	while (dest[i] != '\0')
	{
		i++;
		j++;
	}
	while (src[k] != '\0')
		k++;
	while (src[l] != '\0' && i < size - 1)
	{
		dest[i] = src[l];
		i++;
		l++;
	}
	dest[i] = '\0';
	return (j + k);
}
