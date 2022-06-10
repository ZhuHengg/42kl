/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: czhu-hen <czhu-hen@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 17:23:40 by czhu-hen          #+#    #+#             */
/*   Updated: 2022/06/08 17:24:49 by czhu-hen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_iterative_power(int nb, int power)
{
	int	index;
	int	result;

	index = 0;
	result = 1;
	if (power < 0)
		return (0);
	while (index < power)
	{
		result = result * nb;
		index++;
	}
	return (result);
}
