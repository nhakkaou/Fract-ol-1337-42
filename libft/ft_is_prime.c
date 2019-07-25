/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhakkaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/06 00:04:48 by nhakkaou          #+#    #+#             */
/*   Updated: 2018/10/15 12:40:03 by nhakkaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

static int	impair(int nb, int m, int i)
{
	while (i <= m)
	{
		if ((nb % i) == 0)
			return (0);
		i += 2;
	}
	return (1);
}

int			ft_is_prime(int nb)
{
	int	i;
	int	m;

	m = nb / 2;
	i = 3;
	if (nb < 0)
		return (0);
	else if (nb == 2)
		return (1);
	if (nb == 0 || nb == 1)
		return (0);
	else if ((nb % 2) == 0)
		return (0);
	else if (nb > 0)
		return (impair(nb, m, i));
	return (0);
}
