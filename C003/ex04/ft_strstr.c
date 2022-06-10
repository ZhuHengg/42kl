/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: czhu-hen <czhu-hen@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 11:26:08 by czhu-hen          #+#    #+#             */
/*   Updated: 2022/06/07 11:34:20 by czhu-hen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char	*ft_strstr(char *str, char *to_find)
{
	char	*haystack;
	char	*needle;

	haystack = str;
	needle = to_find;
	if (to_find[0] == '\0')
		return (str);
	while (*str != '\0')
	{
		if (*needle == '\0')
			return (haystack - (needle - to_find));
		if (*needle == *haystack)
			needle++;
		else
			needle = to_find;
		if (*haystack == '\0')
			break ;
		haystack++;
	}
	return (0);
}
