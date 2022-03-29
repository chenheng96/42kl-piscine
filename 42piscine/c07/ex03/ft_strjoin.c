/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchong <cchong@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 10:34:48 by cchong            #+#    #+#             */
/*   Updated: 2022/02/28 10:34:49 by cchong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strcat(char *dest, char *src);
int		ft_strlen(char *s);

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*string;
	int		j;

	j = 0;
	string = malloc(sizeof(char) * 1);
	string[0] = '\0';
	if (size == 0)
		return (string);
	while (size > 0)
	{
		string = ft_strcat(string, strs[j]);
		if (size > 1)
			string = ft_strcat(string, sep);
		size--;
		j++;
	}
	return (string);
}

char	*ft_strcat(char *dest, char *src)
{
	int		i;
	int		j;
	int		k;
	int		l;
	char	*string;

	i = 0;
	j = 0;
	k = ft_strlen(src);
	l = ft_strlen(dest);
	string = malloc(sizeof(char) * (k + l + 1));
	while (dest[j] != 0)
	{
		string[j] = dest[j];
		j++;
	}
	while (src[i] != 0)
	{
		string[j] = src[i];
		i++;
		j++;
	}
	string[j] = '\0';
	return (string);
}

int	ft_strlen(char *s)
{
	int	i;

	i = 0;
	while (s[i] != 0)
		i++;
	return (i);
}
