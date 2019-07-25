/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mytrim.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhakkaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/14 23:36:29 by nhakkaou          #+#    #+#             */
/*   Updated: 2018/10/15 12:39:36 by nhakkaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_sp(char const *s)
{
	int	sp;

	sp = 0;
	while (s[sp] == '\t' || s[sp] == '\n' || s[sp] == ' '
	|| s[sp] == '\f' || s[sp] == '\r' || s[sp] == '\v')
		sp++;
	return (sp);
}

static int		ft_sf(char const *s)
{
	int	sf;
	int	len;

	sf = 0;
	len = ft_strlen(s) - 1;
	while (s[len] == '\t' || s[len] == '\n' || s[len] == ' '
	|| s[len] == '\f' || s[len] == '\r' || s[len] == '\v')
	{
		sf++;
		len--;
	}
	return (sf);
}

char			*ft_space(char const *s)
{
	size_t	size;
	size_t	sp;
	size_t	sf;
	char	*fresh;
	char	*ptrn;

	if (s == 0)
		return (0);
	size = ft_strlen(s);
	sp = ft_sp(s);
	sf = ft_sf(s);
	ptrn = "";
	if (sp == size)
		return (ptrn);
	if ((fresh = malloc(sizeof(s) * (size - sp - sf + 1))) == 0)
		return (0);
	if (sp == 0 && sf == 0)
		return (ft_strcpy(fresh, s));
	if (sp != 0 && sf == 0)
		return (ft_strcpy(fresh, ft_strsub(s, sp, size - sp)));
	if (sp == 0 && sf != 0)
		return (ft_strcpy(fresh, ft_strsub(s, sp, size - sf)));
	if (sp != 0 && sf != 0)
		return (ft_strcpy(fresh, ft_strsub(s, sp, size - sf - sp)));
	return (0);
}
