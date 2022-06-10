/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: czhu-hen <czhu-hen@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 11:23:18 by czhu-hen          #+#    #+#             */
/*   Updated: 2022/06/07 11:25:29 by czhu-hen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_null(char *str)
{
	int	index;

	index = 0;
	while (str[index] != '\0')
	{
		index++;
	}
	return (index);
}

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	printsrc;
	unsigned int	index;

	printsrc = 0;
	index = ft_null(dest);
	while (src[printsrc] != '\0' && printsrc < nb)
	{
		dest[index] = src[printsrc];
		index++;
		printsrc++;
	}
	dest[index] = '\0';
	return (dest);
}
