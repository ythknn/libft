/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yihakan <yihakan@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 19:32:39 by yihakan           #+#    #+#             */
/*   Updated: 2024/10/19 19:32:39 by yihakan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	needle_len;

	needle_len = ft_strlen(needle);
	if (needle_len == 0)
		return ((char *) haystack);
	i = 0;
	while (haystack[i] && i + needle_len <= len && \
	ft_strncmp(haystack + i, needle, ft_strlen(needle)) != 0)
		i++;
	if (!*haystack || i + needle_len > len)
		return (0);
	return ((char *) haystack + i);
}
