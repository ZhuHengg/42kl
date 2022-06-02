/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: czhu-hen <czhu-hen@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 11:03:44 by czhu-hen          #+#    #+#             */
/*   Updated: 2022/05/31 15:06:06 by czhu-hen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	j;
	int	swap;
	int	index;
	int	halfsize;

	index = 0;
	j = size - 1;
	halfsize = size / 2;
	while (index != halfsize)
	{
		swap = tab[j];
		tab[j] = tab[index];
		tab[index] = swap;
		j--;
		index++;
	}
}
