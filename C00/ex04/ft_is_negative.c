/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: czhu-hen <czhu-hen@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 15:08:15 by czhu-hen          #+#    #+#             */
/*   Updated: 2022/05/31 14:31:43 by czhu-hen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_is_negative(int n);

void	ft_is_negative(int n)
{
	char	noob;
	char	pro;

	if (n < 0)
	{
		noob = 'N';
		write(1, &noob, 1);
	}
	else
	{
		pro = 'P';
		write(1, &pro, 1);
	}
}
