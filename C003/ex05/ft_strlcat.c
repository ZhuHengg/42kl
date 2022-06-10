/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: czhu-hen <czhu-hen@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 11:34:44 by czhu-hen          #+#    #+#             */
/*   Updated: 2022/06/07 11:39:02 by czhu-hen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	strlength(char *str)
{
	int	index;

	index = 0;
	while (str[index] != '\0')
		index++;
	return (index);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	int	destlength;
	int	srclength;
	int	remain;

	destlength = strlength(dest);
	srclength = strlength(src);
	remain = size;
	while (remain-- != 0 && *dest != '\0')
		dest++;
	remain = size - destlength;
	if (remain == 0)
		return (destlength + srclength);
	while (*src != '\0')
	{
		if (remain > 1)
		{
			*dest = *src;
			dest++;
		}
		src++;
		remain--;
	}
	*dest = '\0';
	return (destlength + srclength);
}
