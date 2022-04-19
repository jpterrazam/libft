/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpaulo-d <jpaulo-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 22:29:42 by jpaulo-d          #+#    #+#             */
/*   Updated: 2022/04/07 03:19:23 by jpaulo-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t n_bloc, size_t size)
{
	void	*mem_alloc;

	mem_alloc = (void *) malloc (n_bloc * size);
	if (mem_alloc == NULL)
		return (NULL);
	ft_bzero(mem_alloc, n_bloc * size);
	return (mem_alloc);
}
