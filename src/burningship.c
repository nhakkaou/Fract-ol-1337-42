/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   burningship.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhakkaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/20 17:47:53 by nhakkaou          #+#    #+#             */
/*   Updated: 2019/06/22 22:13:36 by nhakkaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../fractol.h"

static void	ship1(t_ml *p, int i, int j)
{
	int o;

	o = 0;
	while (p->z_r * p->z_r + p->z_i * p->z_i < 4 && o < p->iteration)
	{
		p->tmp = fabs(p->z_r * p->z_r - p->z_i * p->z_i + p->c_r);
		p->z_i = fabs(2 * p->z_r * p->z_i + p->c_i);
		p->z_r = p->tmp;
		o++;
	}
	if (o < p->iteration)
		p->data[j * H + i] = 0x140A58 + (o * 1248518);
}

void		burningship(t_ml *p)
{
	int i;
	int j;
	int o;

	i = 0;
	while (i < H)
	{
		j = 0;
		while (j < W)
		{
			p->c_r = p->minre + ((p->maxre - p->minre) / W) * i + p->deplx;
			p->c_i = p->minim + ((p->maxim - p->minim) / H) * j + p->deply;
			o = 0;
			p->z_r = 0;
			p->z_i = 0;
			ship1(p, i, j);
			j++;
		}
		i++;
	}
	p->sym = 3;
	mlx_put_image_to_window(p->ptr, p->window, p->img_ptr, 0, 0);
}
