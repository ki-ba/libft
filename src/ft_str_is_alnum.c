/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alnum.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kiba <kiba@student.42lyon.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/09 10:45:15 by kbarru            #+#    #+#             */
/*   Updated: 2025/03/09 11:16:36 by kiba             ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 *	@brief checks whether passed string contains only
 *	@brief alphanumerical characters or not.
 *	@param str the string to check.
 *	@returns TRUE (1) if `str` is alnum,
 *	@returns FALSE (0) otherwise.
*/
t_bool	str_is_alnum(char str[])
{
	int	i;

	if (!str)
		return (-1);
	i = -1;
	while (str[++i])
	{
		if (!ft_isalnum(str[i]))
			return (FALSE);
	}
	return (TRUE);
}
