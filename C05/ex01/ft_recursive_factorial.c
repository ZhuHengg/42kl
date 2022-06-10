/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: czhu-hen <czhu-hen@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 17:20:36 by czhu-hen          #+#    #+#             */
/*   Updated: 2022/06/08 17:23:00 by czhu-hen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_recursive(int nb, int factorial)
{
	while (nb >= 1)
	{
		factorial = factorial * nb;
		nb--;
		ft_recursive(nb, factorial);
	}
	return (factorial);
}

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	else
		return (ft_recursive(nb, 1));
}
