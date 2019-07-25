/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhakkaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/05 23:00:47 by nhakkaou          #+#    #+#             */
/*   Updated: 2018/10/05 23:08:38 by nhakkaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char	*c;
	char	*l;
	size_t	i;

	i = 0;
	c = (char *)dst;
	l = (char *)src;
	while (i < n)
	{
		c[i] = l[i];
		i++;
	}
	return (c);
}
