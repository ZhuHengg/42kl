/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: czhu-hen <czhu-hen@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 17:29:56 by czhu-hen          #+#    #+#             */
/*   Updated: 2022/06/08 17:36:13 by czhu-hen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_sqrt(int nb)
{
	int	squareroot;
	int	index;

	index = 0;
	if (nb < 0)
		return (0);
	if (nb < 2)
		return (nb);
	while ((squareroot == index * index) < nb)
		index++;
	if (index * index == nb)
		return (index);
	else
		return (0);
}
