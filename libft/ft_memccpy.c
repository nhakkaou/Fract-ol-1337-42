/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhakkaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/06 12:51:34 by nhakkaou          #+#    #+#             */
/*   Updated: 2018/10/15 13:01:06 by nhakkaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	char	*cp;
	char	*l;
	size_t	i;
	char	nono;

	i = 0;
	nono = c;
	cp = (char *)dst;
	l = (char *)src;
	if (*l)
	{
		while (i < n)
		{
			cp[i] = l[i];
			if (cp[i] == nono)
				return (cp + 1 + i);
			i++;
		}
	}
	return (0);
}
