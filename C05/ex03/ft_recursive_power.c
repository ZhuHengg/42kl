/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: czhu-hen <czhu-hen@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 17:25:29 by czhu-hen          #+#    #+#             */
/*   Updated: 2022/06/08 17:26:40 by czhu-hen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_recursive(int nb, int power, int result)
{
	while (power > 0)
	{
		power--;
		return (ft_recursive(nb, power, result *= nb));
	}
	return (result);
}

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	else
		return (ft_recursive(nb, power, 1));
}
