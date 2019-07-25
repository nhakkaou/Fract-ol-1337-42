/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhakkaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/08 14:37:34 by nhakkaou          #+#    #+#             */
/*   Updated: 2018/10/10 16:55:04 by nhakkaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char *fraiche;

	fraiche = (char *)malloc(sizeof(char) * size + 1);
	if (fraiche == NULL)
		return (0);
	ft_memset(fraiche, 0, size + 1);
	return (fraiche);
}
