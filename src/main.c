/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhakkaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/05 22:12:21 by nhakkaou          #+#    #+#             */
/*   Updated: 2019/06/26 17:35:44 by nhakkaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../fractol.h"

void	draw(t_ml p)
{
	if (p.sym == 1)
		mandel(&p);
	else if (p.sym == 2)
		julia(&p);
	else if (p.sym == 3)
		burningship(&p);
	else if (p.sym == 4)
		mm(&p);
	infos(p);
}

int		fract_keys(int key, t_ml *p)
{
	if (key == 53)
		exit(1);
	if (key == 124)
	{
		destroy_img(p);
		p->deplx -= ((p->maxre - p->minre) / W) * 2;
		draw(*p);
	}
	if (key == 36)
	{
		destroy_img(p);
		change_fracts(p);
	}
	if (key == 123)
	{
		destroy_img(p);
		p->deplx += ((p->maxre - p->minre) / W) * 2;
		draw(*p);
	}
	fract(p, key);
	ft_itir(key, p);
	return (0);
}

int		mouse_zoom(int mouse, int x, int y, t_ml *p)
{
	if (mouse == 4 || mouse == 5)
	{
		p->mousere = p->minre + (double)x / (W / (p->maxre - p->minre));
		p->mouseim = p->minim + (double)y / (W / (p->maxim - p->minim));
		(mouse == 4) ? applyzoom(p, p->mousere, p->mouseim) : 1 == 1;
		(mouse == 5) ? applydzoom(p, p->mousere, p->mouseim) : 1 == 1;
		destroy_img(p);
		draw(*p);
	}
	return (0);
}

int		fract_mouse(int x, int y, t_ml *p)
{
	if (p->symjulia == 0)
	{
		p->c_r = (x - W / 2.0) * 4.0 / W;
		p->c_i = (y - H / 2.0) * 4.0 / H;
		if (p->c_r >= -2 && p->c_r <= 2 && p->sym == 2)
		{
			destroy_img(p);
			julia(p);
		}
	}
	return (0);
}

int		main(int ac, char **av)
{
	t_ml	p;
	int		i;

	i = 0;
	if (ac == 2)
	{
		menu(av[1], &p);
		lets_go(&p);
		draw(p);
	}
	else
		error();
	mlx_hook(p.window, 2, 1, fract_keys, &p);
	mlx_hook(p.window, 6, 1, fract_mouse, &p);
	mlx_mouse_hook(p.window, mouse_zoom, &p);
	mlx_loop(p.ptr);
	return (0);
}
