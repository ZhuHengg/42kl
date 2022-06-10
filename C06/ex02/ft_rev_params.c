/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: czhu-hen <czhu-hen@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 10:53:44 by czhu-hen          #+#    #+#             */
/*   Updated: 2022/06/08 11:12:57 by czhu-hen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>

void	ft_putstr(char *str)
{
	while (*str != '\0')
	{
		write (1, str, 1);
		str++;
	}
}

int	main(int argc, char **argv)
{
	int	index;

	index = 0;
	while (index++ < argc)
	{
		if (index == argc)
			break ;
		ft_putstr(argv[argc - index]);
		write (1, "\n", 1);
	}
}
