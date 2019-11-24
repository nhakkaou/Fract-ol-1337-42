/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   julia.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhakkaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/20 23:05:05 by nhakkaou          #+#    #+#             */
/*   Updated: 2019/06/20 23:19:13 by nhakkaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../fractol.h"

static void	julia1(t_ml *p, int i, int j)
{
	int o;
	t_rgb	c;

	c.r = 255;
	c.g = 255;
	c.b = 0;
	o = 0;
	while (p->z_r * p->z_r + p->z_i * p->z_i < 4 && o < p->iteration)
	{
		p->tmp = p->z_r * p->z_r - p->z_i * p->z_i + p->c_r;
		p->z_i = 2 * p->z_r * p->z_i + p->c_i;
		p->z_r = p->tmp;
		o++;
	}
	if (o < p->iteration)
		p->data[j * H + i] = get_color(p->iteration, o, c, 2);
}

void		julia(t_ml *p)
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
			p->z_r = p->minre + ((p->maxre - p->minre) / W) * i + p->deplx;
			p->z_i = p->minim + ((p->maxim - p->minim) / H) * j + p->deply;
			o = 0;
			julia1(p, i, j);
			j++;
		}
		i++;
	}
	p->sym = 2;
	mlx_put_image_to_window(p->ptr, p->window, p->img_ptr, 0, 0);
}
