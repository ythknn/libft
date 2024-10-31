/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yihakan <yihakan@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 19:13:16 by yihakan           #+#    #+#             */
/*   Updated: 2024/10/19 19:13:18 by yihakan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t		i;
	char		*chr_dst;
	char		*chr_src;

	if (!dst && !src)
		return (dst);
	chr_dst = (char *) dst;
	chr_src = (char *) src;
	i = 0;
	while (i < n)
	{
		chr_dst[i] = chr_src[i];
		i++;
	}
	return (dst);
}
