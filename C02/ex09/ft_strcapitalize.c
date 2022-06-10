/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: czhu-hen <czhu-hen@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 10:50:13 by czhu-hen          #+#    #+#             */
/*   Updated: 2022/06/02 11:10:29 by czhu-hen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char	*ft_lowercase(char *str)
{
	int	i;

	i = -1;
	while (str[++i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] += 32;
		}
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	c;
	int	count;

	count = 1;
	c = 0;
	ft_lowercase(str);
	while (str[c] != '\0')
	{
		if (str[c] >= 'a' && str[c] <= 'z')
		{
			if (count == 1)
			{
				str[c] -= 32;
				count = 0;
			}
		}
		else if (str[c] >= '0' && str[c] <= '9')
		{
			count = 0;
		}
		else
			count = 1;
		c++;
	}
	return (str);
}
