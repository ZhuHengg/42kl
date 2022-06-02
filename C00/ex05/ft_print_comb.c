/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: czhu-hen <czhu-hen@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 16:00:09 by czhu-hen          #+#    #+#             */
/*   Updated: 2022/05/29 13:20:30 by czhu-hen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>

void	ft_print_comb(void);

void	yeet(int n)
{
	char	woi;

	woi = n + '0';
	write(1, &woi, 1);
}

void	ft_printint(int a, int b, int c)
{
	yeet(a);
	yeet(b);
	yeet(c);
}

void	ehe(char heh)
{
	write(1, &heh, 1);
}

void	ft_print_comb(void)
{
	int	a;
	int	b;
	int	c;

	a = 0;
	while (a <= 7)
	{
		b = a + 1;
		while (b <= 8)
		{
			c = b + 1;
			while (c <= 9)
			{
				ft_printint(a, b, c);
				if (a != 7 || b != 8 || c != 9)
				{
					ehe (',');
					ehe(' ');
				}
				c++;
			}
			b++;
		}
		a++;
	}
}
