/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhakkaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/06 19:05:03 by nhakkaou          #+#    #+#             */
/*   Updated: 2018/10/09 15:31:57 by nhakkaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void *fraiche;

	fraiche = 0;
	if (size > 0)
	{
		fraiche = (void*)malloc(sizeof(*fraiche) * size);
		if (fraiche == NULL)
			return (NULL);
	}
	return (ft_memset(fraiche, 0, size));
}
