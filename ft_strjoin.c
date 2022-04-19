/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpaulo-d <jpaulo-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 22:29:42 by jpaulo-d          #+#    #+#             */
/*   Updated: 2022/04/19 19:54:22 by jpaulo-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*join_str;
	int		i;
	int		j;

	join_str = malloc((ft_strlen(s1) + ft_strlen(s2) + 1) * sizeof(char));
	if (join_str == NULL)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		join_str[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j])
	{
		join_str[i] = s2[j];
		i++;
		j++;
	}
	join_str[i] = '\0';
	return (join_str);
}
