/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_next_line_utils.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbarru <kbarru@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 17:40:05 by kbarru            #+#    #+#             */
/*   Updated: 2025/03/07 17:45:20 by kbarru           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* @return the index (starting at 1) of the first c character in s.
* If not found, returns NULL.

* @param s the string to check for c in.
* @param c the character to find in the string.
*/
char	*ft_strchr(const char *s, int c)
{
	if (!s)
		return (NULL);
	while (*s)
	{
		if (*s == (char)c)
			return ((char *)s);
		++s;
	}
	if ((char)c == '\0')
		return ((char *)s);
	return (NULL);
}

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	int	i;

	if ((src < dest))
	{
		i = n - 1;
		while (i >= 0)
		{
			((unsigned char *)(dest))[i] = ((unsigned char *)(src))[i];
			--i;
		}
	}
	if (dest < src)
	{
		i = 0;
		while (i <= (int)n)
		{
			((unsigned char *)(dest))[i] = ((unsigned char *)(src))[i];
			++i;
		}
	}
	return (dest);
}

char	*ft_strnjoin(char *s1, char *s2, size_t n)
{
	char	*joined_str;
	size_t	s1_len;
	size_t	s2_len;

	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	if (s2_len > n + 1)
		s2_len = n + 1;
	joined_str = malloc((s1_len + s2_len + 1) * sizeof(char));
	if (!joined_str)
		return (NULL);
	ft_strncpy(joined_str, s1, s1_len);
	ft_strncpy(joined_str + s1_len, s2, s2_len);
	return (joined_str);
}

char	*ft_strncpy(char dst[], const char src[], size_t n)
{
	size_t	i;

	i = 0;
	while (i < n && src[i])
	{
		dst[i] = src[i];
		++i;
	}
	while (i <= n)
	{
		dst[i] = '\0';
		++i;
	}
	return (dst);
}
