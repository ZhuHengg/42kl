/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: czhu-hen <czhu-hen@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 17:18:59 by czhu-hen          #+#    #+#             */
/*   Updated: 2022/06/08 17:20:18 by czhu-hen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_iterative_factorial(int nb)
{
	int	factorial;
	int	index;

	index = nb;
	factorial = 1;
	if (nb < 0)
		return (0);
	while (index >= 1)
	{
		factorial = factorial * index;
		index--;
	}
	return (factorial);
}
