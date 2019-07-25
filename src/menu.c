/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   menu.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhakkaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/20 17:45:32 by nhakkaou          #+#    #+#             */
/*   Updated: 2019/06/23 19:56:12 by nhakkaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../fractol.h"

void	error(void)
{
	ft_putstr("\033[0;33m   Usage :: ./fractol Fractal\n\n");
	ft_putstr("\033[0;36m\n-----------------------------\n");
	ft_putstr("|| \033[0;33m   Fractal:\n");
	ft_putstr("\033[0;36m||                      Mandelbrot\n");
	ft_putstr("||\033[0;36m                      Julia\n");
	ft_putstr("||\033[0;36m                      Burningship\n");
	ft_putstr("||\033[0;36m                      Tricorn");
	ft_putstr("\n-----------------------------\n");
	exit(1);
}

void	menu(char *s, t_ml *p)
{
	if (!ft_strcmp(s, "Mandelbrot"))
	{
		p->sym = 1;
		p->name = "Mandelbrot";
	}
	else if (!ft_strcmp(s, "Burningship"))
	{
		p->sym = 3;
		p->name = "Burningship";
	}
	else if (!ft_strcmp(s, "Julia"))
	{
		p->sym = 2;
		p->name = "Julia";
	}
	else if (!ft_strcmp(s, "Tricorn"))
	{
		p->sym = 4;
		p->name = "Tricorn";
	}
	else
		error();
}
