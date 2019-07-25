/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhakkaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/06 11:35:15 by nhakkaou          #+#    #+#             */
/*   Updated: 2018/10/10 19:12:14 by nhakkaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	c[65535];

	if (len > 65535)
		return (NULL);
	ft_memcpy(c, src, len);
	ft_memcpy(dst, c, len);
	return (dst);
}
