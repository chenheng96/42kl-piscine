/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchong <cchong@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 16:18:00 by cchong            #+#    #+#             */
/*   Updated: 2022/02/22 17:45:52 by cchong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	if (to_find[i] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		j = 0;
		while (str [i + j] != '\0'
			&& str[i + j] == to_find[j])
		{
			if ((to_find[j + 1]) == 0)
				return (&str[i]);
			else
				j++;
		}
		i++;
	}
	return (0);
}
