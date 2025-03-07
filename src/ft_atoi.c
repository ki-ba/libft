/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbarru <kbarru@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 13:27:11 by kbarru            #+#    #+#             */
/*   Updated: 2025/03/07 21:41:30 by kbarru           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// First, any number of whitespaces
// Then, a single - or + char
// then numbers
// returns the current number on error.
int	ft_isnumber(char c)
{
	return (c >= '0' && c <= '9');
}

static int	ft_issign(char c)
{
	return (c == '-' || c == '+');
}

static int	ft_iswhitespace(char c)
{
	return (c == 32 || (c >= 9 && c <= 13));
}

int	ft_atoi(const char *nptr)
{
	int		sign;
	long	number;
	long	check;

	number = 0;
	sign = 1;
	while (ft_iswhitespace(*nptr))
		++nptr;
	if (ft_issign(*nptr))
	{
		if (*nptr == '-')
			sign *= (-1);
		++nptr;
	}
	while (ft_isnumber(*nptr))
	{
		check = number;
		number = (number * 10) + (*nptr - 48);
		if (number < check && sign == 1)
			return (-1);
		else if (number < check && sign == -1)
			return (0);
		++nptr;
	}
	return (sign * (int)number);
}
