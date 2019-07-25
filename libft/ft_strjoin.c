/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhakkaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/09 16:07:34 by nhakkaou          #+#    #+#             */
/*   Updated: 2018/10/13 17:42:56 by nhakkaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*phr;
	int		i;

	if (!s1 || !s2)
		return (NULL);
	i = ft_strlen(s1) + ft_strlen(s2);
	phr = ft_memalloc(i + 1);
	if (phr == NULL)
		return (NULL);
	phr = ft_strcat(phr, (char*)s1);
	phr = ft_strcat(phr, (char*)s2);
	phr[i + 1] = '\0';
	return (phr);
}
