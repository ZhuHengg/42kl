/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: czhu-hen <czhu-hen@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 16:18:18 by czhu-hen          #+#    #+#             */
/*   Updated: 2022/06/07 16:57:14 by czhu-hen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>
#define NOT_MATCH - 1

int	strlength(char *str)
{
	int	index;

	index = 0;
	while (str[index] != '\0')
		index++;
	return (index);
}

int	ft_valid(char *str)
{
	int		index;
	int		j;
	char	*current;

	index = 0;
	current = str;
	if (current == 0 || strlength(current) <= 1)
		return (0);
	while (*current != '\0')
	{
		if (*current == '+' || *current == '-')
			return (0);
		current++;
	}
	while (index < current - str)
	{
		j = index + 1;
		while (j < current - str)
		{
			if (str[index] == str[j++])
				return (0);
		}
		index++;
	}
	return (1);
}

int	ft_match(char str, char *base)
{
	int	index;

	index = 0;
	while (base[index] != '\0')
	{
		if (base[index] == str)
			return (index);
		index++;
	}
	return (NOT_MATCH);
}
// int ft_result (char *str, char *base, int radix)
// {
// 	int next;
// 	int negative;
// 	int result;

// 	negative = 1;
// 	result = 0;
// 	while (*str == ' ')
// 		str++;
// 	while (*str == '+' || *str == '-')
// 	{
// 		if (*str == '-')
// 			negative = negative * -1;
// 		str++;
// 	}
// 	while ((next = ft_match(*str, base)) != NOT_MATCH)
// 	{
// 		result = result * radix;
// 		result = result + next;
// 		str++;
// 	}
// 	return (result * negative);
// }
int	ft_atoi_base(char *str, char *base)
{
	int	radix;
	int negative;
	int	value_of_valid;
	int	result;

	result = 0;
	negative = 1;
	radix = strlength(base);
	value_of_valid = ft_valid(base);
	if (value_of_valid == 0)
		return (0);
	while (*str == ' ')
		str++;
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
			negative = negative * -1;
		str++;
	}
	while ((next = ft_match(*str, base)) != NOT_MATCH)
	{
		result = result * radix;
		result = result + next;
		str++;
	}
	return (result * negative);
}
