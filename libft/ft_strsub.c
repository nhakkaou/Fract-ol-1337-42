/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhakkaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/08 22:13:03 by nhakkaou          #+#    #+#             */
/*   Updated: 2018/10/12 12:28:46 by nhakkaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char *fr;

	if (!s)
		return (NULL);
	fr = (char*)malloc(sizeof(char) * (len + 1));
	if (!fr)
		return (0);
	fr = ft_strncpy(fr, s + start, len);
	fr[len] = '\0';
	return (fr);
}
