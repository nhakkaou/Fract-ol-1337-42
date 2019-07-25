/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhakkaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/16 16:20:13 by nhakkaou          #+#    #+#             */
/*   Updated: 2018/10/17 00:33:29 by nhakkaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	char		*str;
	int			negative;
	int			l;

	l = ft_nbch(n);
	negative = 0;
	if (n < 0)
		negative = 1;
	str = ft_strnew(l);
	if (!str)
		return (NULL);
	if (!n)
		*str = '0';
	while (n && l--)
	{
		str[l] = (n < 0) ? -(n % 10) + '0' : (n % 10) + '0';
		n /= 10;
	}
	if (negative)
		str[0] = '-';
	return (str);
}
