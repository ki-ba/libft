/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbarru <kbarru@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 16:08:59 by kbarru            #+#    #+#             */
/*   Updated: 2025/03/07 18:21:25 by kbarru           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	dst_len;
	size_t	src_len;

	if (!dst || !src)
		return (0);
	i = 0;
	src_len = ft_strlen(src);
	dst_len = ft_strnlen(dst, size);
	if (size == dst_len)
		return (dst_len + src_len);
	while (i < size - dst_len - 1 && i < src_len)
	{
		dst[dst_len + i] = src[i];
		++i;
	}
	dst[dst_len + i] = '\0';
	return (src_len + dst_len);
}
