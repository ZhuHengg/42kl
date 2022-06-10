/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: czhu-hen <czhu-hen@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 16:04:36 by czhu-hen          #+#    #+#             */
/*   Updated: 2022/06/07 16:14:53 by czhu-hen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int	strlength(char *str)
{
	int	index;

	index = 0;
	while (str[index] != '\0')
		index++;
	return (index);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_valid(char *str)
{
	char	*current;
	int		index;
	int		j;

	current = str;
	index = 0;
	if (str == 0 || strlength(str) <= 1)
		return (0);
	while (*current != '\0')
	{
		if (*current == '+' || *current == '-')
			return (0);
		current++;
	}
	while (index < current - str)
	{
		j = index + 1;
		while (j < current - str)
		{
			if (str[index] == str[j++])
				return (0);
		}
		index++;
	}
	return (1);
}

void	ft_convert(int nbr, char *base, int radix)
{
	if (nbr == -2147483648)
	{
		ft_convert(nbr / radix, base, radix);
		write (1, &base[-(nbr % radix)], 1);
		return ;
	}
	if (nbr < 0)
	{
		ft_putchar('-');
		ft_convert(-nbr, base, radix);
		return ;
	}
	if (nbr > radix - 1)
		ft_convert(nbr / radix, base, radix);
	write (1, &base[nbr % radix], 1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	is_valid;
	int	radix;

	radix = strlength(base);
	is_valid = ft_valid(base);
	if (is_valid == 0)
		return ;
	else
		ft_convert(nbr, base, radix);
}
