#include "../fractol.h"

int		get_color(int l, int nb, t_rgb c, int m)
{
	int		blue;
	int		red;
	int		green;
	double	v;
	v = (double)nb / (double)l;
	blue = 0;
	red = 0;
	green = 0;
	if (m == 1)
	{
		blue = (8.5 * (1 - v) * (1 - v) * (1 - v) * v * c.b);
		green = (15 * (1 - v) * (1 - v) * v * v * c.g);
		red = (9 * (1 - v) * v * v * v * c.r);
	}
	else if (m == 0)
		return ((0xffffff + (nb * 5000)));
	else if (m == 2)
	{
		blue = nb * c.b / 50;
		green = nb * c.g / 50;
		red = nb * c.r / 50;
	}
	return ((red << 16 | green << 8 | blue));
}