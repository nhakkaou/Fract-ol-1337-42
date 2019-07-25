/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhakkaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/17 23:35:23 by nhakkaou          #+#    #+#             */
/*   Updated: 2018/10/17 23:35:52 by nhakkaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;
	char	*sr;

	sr = (char *)s;
	i = ft_strlen((char *)s);
	if ((char)c == '\0')
		return (sr + i);
	while ((int)i >= 0)
	{
		if (*(char *)(sr + i) == (char)c)
			return (sr + i);
		i--;
	}
	return (NULL);
}
