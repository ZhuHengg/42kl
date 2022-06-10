/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: czhu-hen <czhu-hen@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 11:20:48 by czhu-hen          #+#    #+#             */
/*   Updated: 2022/06/07 11:23:00 by czhu-hen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_null(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int	index;
	int	j;

	index = 0;
	j = ft_null(dest);
	while (src[index] != '\0')
	{
		dest[j] = src[index];
		j++;
		index++;
	}
	dest[j] = '\0';
	return (dest);
}
