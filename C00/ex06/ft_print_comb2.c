/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: czhu-hen <czhu-hen@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 16:10:39 by czhu-hen          #+#    #+#             */
/*   Updated: 2022/05/31 14:32:07 by czhu-hen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_print_comb2(void);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putint(int abc)
{
	char	output;

	output = abc + '0';
	write(1, &output, 1);
}

void	ft_printout(int a, int b, int c, int d)
{
	ft_putchar (' ');
	ft_putint (a);
	ft_putint (b);
	ft_putchar (' ');
	ft_putint (c);
	ft_putint (d);
	if (a != 9 || b != 8 || c != 9 || d != 9)
	{
		ft_putchar(',');
	}
}

void	cal( int a, int b, int c, int d)
{
	while (a <= 9)
	{
		while (b <= 9)
		{
			while (c <= 9)
			{
				while (d <= 9)
				{
					if (a * 10 + b * 1 < c * 10 + d * 1)
					{
						ft_printout(a, b, c, d);
					}
					d++;
				}
				c++;
				d = 0;
			}
			b++;
			c = a;
			d = b + 1;
		}
		a++;
		b = 0;
	}
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;
	int	c;
	int	d;

	a = 0;
	b = 0;
	c = 0;
	d = 1;
	cal(a, b, c, d);
}
