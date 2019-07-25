/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhakkaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/03 16:26:49 by nhakkaou          #+#    #+#             */
/*   Updated: 2018/10/18 16:49:48 by nhakkaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	int			r;
	char		*ptr;

	r = 0;
	if ((ptr = (char*)malloc(sizeof(*ptr) * (ft_strlen(s1)) + 1)) == NULL)
		return (0);
	while (s1[r] != '\0')
	{
		ptr[r] = s1[r];
		r++;
	}
	ptr[r] = '\0';
	return (ptr);
}
