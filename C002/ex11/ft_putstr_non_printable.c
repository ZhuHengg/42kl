/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: czhu-hen <czhu-hen@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 10:56:37 by czhu-hen          #+#    #+#             */
/*   Updated: 2022/06/07 10:13:11 by czhu-hen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_print_hexa(char abc)
{
	char	*hex;

	hex = "0123456789abcdef";
	ft_putchar(hex[abc / 16]);
	ft_putchar(hex[abc % 16]);
}

void	ft_putstr_non_printable(char *str)
{
	int	index;

	index = 0;
	while (str[index] != '\0')
	{
		if (str[index] >= ' ' && str[index] != 127)
		{
			ft_putchar(str[index]);
		}
		else
		{
			ft_putchar('\\');
			ft_print_hexa(str[index]);
		}
		index++;
	}
}

int	main(void)
{
	char	*string;

	string = "Coucou\ntu vas bien ?";
	ft_putstr_non_printable(string);
}
