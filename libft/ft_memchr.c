/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhakkaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/06 15:56:08 by nhakkaou          #+#    #+#             */
/*   Updated: 2018/10/17 19:00:51 by nhakkaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;
	char	find;
	char	*str;

	i = 0;
	str = (char *)s;
	find = c;
	while (i < n)
	{
		if (str[i] == find)
			return ((void *)str + i);
		i++;
	}
	return (0);
}
