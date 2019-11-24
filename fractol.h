/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fractol.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhakkaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/20 18:13:15 by nhakkaou          #+#    #+#             */
/*   Updated: 2019/06/23 20:04:11 by nhakkaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRACTOL_H
# define FRACTOL_H
# include "mlx.h"
# define W 800
# define H 800
# include <stdio.h>
# include <stdlib.h>
# include <sys/stat.h>
# include <fcntl.h>
# include <unistd.h>
# include <math.h>
# include "libft/libft.h"

typedef struct		s_ml
{
	int			a;
	int			b;
	int			c;
	void		*ptr;
	void		*window;
	void		*img_ptr;
	int			*data;
	int			symjulia;
	double		c_r;
	double		c_i;
	double		z_r;
	double		z_i;
	double		tmp;
	double		zoom;
	int			iteration;
	double		maxre;
	double		mousere;
	double		mouseim;
	double		minre;
	double		maxim;
	double		minim;
	double		deplx;
	double		deply;
	char		*name;
	int			sym;
	int			mousewheel;
}					t_ml;
typedef struct		s_rgb
{
	int			r;
	int			g;
	int			b;
}					t_rgb;
void				mandelbrot(t_ml *p);
void				ship(t_ml *p);
void				julia(t_ml *p);
int					ft_strcmp(const char *s1, const char *s2);
void				mm(t_ml *p);
void				change_color(int *data, t_ml *p);
void				applyzoom(t_ml *e, double mousere, double mouseim);
double				interpolate(double start, double end, double interpolation);
void				applydzoom(t_ml *e, double mousere, double mouseim);
void				error();
void				menu(char *s, t_ml *p);
void				mandel(t_ml *params);
void				draw(t_ml p);
void				burningship(t_ml *params);
void				julia(t_ml *params);
void				mm(t_ml *params);
void				change_fracts(t_ml *p);
void				infos(t_ml p);
void				destroy_img(t_ml *p);
void				intialiser_re_im(t_ml *p);
void				fract(t_ml *p, int key);
void				lets_go(t_ml *p);
void				ft_itir(int key, t_ml *p);
int					get_color(int l, int nb, t_rgb c, int m);

#endif
