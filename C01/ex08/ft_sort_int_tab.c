/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: czhu-hen <czhu-hen@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 10:57:29 by czhu-hen          #+#    #+#             */
/*   Updated: 2022/05/31 11:02:55 by czhu-hen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	swap(int *a, int *b)
{
	int	swap;

	swap = *a;
	*a = *b;
	*b = swap;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	loop;
	int	index;

	loop = 0;
	index = 0;
	while (loop < size)
	{
		while (index < size - 1)
		{
			if (tab[index] > tab[index + 1])
			{
				swap (&tab[index], &tab[index + 1]);
			}
			index++;
		}
		loop++;
		index = 0;
	}
}
