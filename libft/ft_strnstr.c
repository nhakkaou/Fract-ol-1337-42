/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhakkaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/06 15:46:30 by nhakkaou          #+#    #+#             */
/*   Updated: 2018/10/09 22:15:21 by nhakkaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t			i;
	size_t			j;
	char			*str;
	char			*find;

	str = (char *)haystack;
	find = (char *)needle;
	if (!*find)
		return (str);
	i = 0;
	while (str[i] != '\0' && i + ft_strlen(needle) <= len)
	{
		j = 0;
		while (find[j] != '\0')
		{
			if (str[i + j] != find[j])
				break ;
			j++;
		}
		if (find[j] == '\0')
			return (str + i);
		i++;
	}
	return (0);
}
