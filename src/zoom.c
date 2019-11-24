/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ya_zomini.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhakkaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/20 17:49:44 by nhakkaou          #+#    #+#             */
/*   Updated: 2019/06/20 22:53:57 by nhakkaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../fractol.h"

double	interpolate(double start, double end, double interpolation)
{
	return (start + ((end - start) * interpolation));
}

void	applyzoom(t_ml *e, double mousere, double mouseim)
{
	e->minre = interpolate(mousere, e->minre, 0.95);
	e->minim = interpolate(mouseim, e->minim, 0.95);
	e->maxre = interpolate(mousere, e->maxre, 0.95);
	e->maxim = interpolate(mouseim, e->maxim, 0.95);
}

void	applydzoom(t_ml *e, double mousere, double mouseim)
{
	e->minre = interpolate(mousere, e->minre, 1.01);
	e->minim = interpolate(mouseim, e->minim, 1.01);
	e->maxre = interpolate(mousere, e->maxre, 1.01);
	e->maxim = interpolate(mouseim, e->maxim, 1.01);
}
