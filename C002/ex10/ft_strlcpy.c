/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: czhu-hen <czhu-hen@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 10:54:04 by czhu-hen          #+#    #+#             */
/*   Updated: 2022/06/07 10:12:30 by czhu-hen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	count;

	count = 0;
	while (*src != '\0')
	{
		if (count < size - 1)
		{
			*dest = *src;
			dest++;
		}
		count++;
		src++;
	}
	*dest = '\0';
	return (count);
}
