/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhakkaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/14 10:03:56 by nhakkaou          #+#    #+#             */
/*   Updated: 2018/10/11 19:08:24 by nhakkaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	unsigned int cpt;

	cpt = 0;
	while (src[cpt] != '\0' && cpt < len)
	{
		dst[cpt] = src[cpt];
		cpt++;
	}
	while (cpt < len)
	{
		dst[cpt] = '\0';
		cpt++;
	}
	return (dst);
}
