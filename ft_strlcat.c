/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yihakan <yihakan@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 19:14:18 by yihakan           #+#    #+#             */
/*   Updated: 2024/10/19 19:14:19 by yihakan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	char	*chr_dest;
	char	*chr_src;
	size_t	dest_len;
	size_t	i;

	chr_dest = (char *) dst;
	chr_src = (char *) src;
	dest_len = ft_strlen(chr_dest);
	if (dest_len >= dstsize)
		return (dstsize + ft_strlen(src));
	i = 0;
	while (chr_src[i] && i + dest_len + 1 < dstsize)
	{
		chr_dest[dest_len + i] = chr_src[i];
		i++;
	}
	dst[i + dest_len] = '\0';
	return (dest_len + ft_strlen(chr_src));
}
