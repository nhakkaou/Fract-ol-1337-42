/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   keys.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhakkaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/22 21:49:21 by nhakkaou          #+#    #+#             */
/*   Updated: 2019/06/28 22:01:43 by nhakkaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../fractol.h"

void	lets_go(t_ml *p)
{
	p->ptr = mlx_init();
	p->window = mlx_new_window(p->ptr, W, H, p->name);
	p->img_ptr = mlx_new_image(p->ptr, W, H);
	p->data = (int *)mlx_get_data_addr(p->img_ptr, &p->a, &p->b, &p->c);
	p->minre = -2;
	p->maxre = 2;
	p->minim = -2;
	p->maxim = 2;
	p->symjulia = 0;
	p->iteration = 50;
}

void	destroy_img(t_ml *p)
{
	mlx_destroy_image(p->ptr, p->img_ptr);
	mlx_clear_window(p->ptr, p->window);
	p->img_ptr = mlx_new_image(p->ptr, W, H);
	p->data = (int *)mlx_get_data_addr(p->img_ptr, &p->a, &p->b, &p->c);
}

void	intialiser_re_im(t_ml *p)
{
	p->minre = -2;
	p->maxre = 2;
	p->minim = -2;
	p->maxim = 2;
	p->iteration = 50;
}

void	fract(t_ml *p, int key)
{
	if (key == 126 || key == 125 || key == 34)
		destroy_img(p);
	if (key == 126)
	{
		p->deply += ((p->maxre - p->minre) / W) * 2;
		draw(*p);
	}
	if (key == 125)
	{
		p->deply -= ((p->maxre - p->minre) / W) * 2;
		draw(*p);
	}
	if (key == 34)
	{
		intialiser_re_im(p);
		draw(*p);
	}
	if (key == 49)
	{
		mlx_clear_window(p->ptr, p->window);
		change_color(p->data, p);
	}
}
