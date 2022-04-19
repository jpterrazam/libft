/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpaulo-d <jpaulo-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 22:29:42 by jpaulo-d          #+#    #+#             */
/*   Updated: 2022/04/14 01:49:52 by jpaulo-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;
	
	i = ft_strlen(s);
	while (i > 0 && (s[i] != c))
		i--;
	if (s[i] == c)
		return ((char *) &s[i]);
	return (NULL);
}
