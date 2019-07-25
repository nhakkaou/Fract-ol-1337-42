/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhakkaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/08 18:16:26 by nhakkaou          #+#    #+#             */
/*   Updated: 2018/10/12 17:05:58 by nhakkaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrev(char *str)
{
	int		i;
	int		size;
	char	rev;

	i = 0;
	size = ft_strlen(str) - 1;
	while (i < size)
	{
		rev = str[i];
		str[i] = str[size];
		str[size] = rev;
		i++;
		size--;
	}
	return (str);
}
