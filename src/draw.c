/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   draw.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhakkaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/20 22:54:01 by nhakkaou          #+#    #+#             */
/*   Updated: 2019/06/26 17:40:09 by nhakkaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../fractol.h"

void	change_fracts(t_ml *p)
{
	intialiser_re_im(p);
	p->sym++;
	if (p->sym == 5)
		p->sym = 1;
	draw(*p);
}

void	infos(t_ml p)
{
	mlx_string_put(p.ptr, p.window, 10, W - 120, 0xCEF279, p.name);
	mlx_string_put(p.ptr, p.window, 10, W - 100, 0xCEF279, "i : initialiser");
	mlx_string_put(p.ptr, p.window, 10, W - 80, 0xCEF279,
	"space: change color");
	mlx_string_put(p.ptr, p.window, 10, W - 60, 0xCEF279,
	"' + ': iteration");
	mlx_string_put(p.ptr, p.window, 10, W - 40, 0xCEF279,
	"entre: change fractals");
}

void	change_color(int *data, t_ml *p)
{
	int	i;

	i = 0;
	while (i < W * H)
	{
		data[i] -= 400;
		i++;
	}
	mlx_put_image_to_window(p->ptr, p->window, p->img_ptr, 0, 0);
}

void	ft_itir(int key, t_ml *p)
{
	if (key == 69)
	{
		p->iteration += 50;
		destroy_img(p);
		draw(*p);
	}
	if (key == 65)
	{
		if (p->symjulia == 1)
			p->symjulia = 0;
		else
			p->symjulia = 1;
	}
}
