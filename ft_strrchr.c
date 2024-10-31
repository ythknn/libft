/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yihakan <yihakan@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 19:30:50 by yihakan           #+#    #+#             */
/*   Updated: 2024/10/19 19:30:51 by yihakan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;
	size_t	last_index;

	if ((char) c == '\0')
		return ((char *)(s + ft_strlen(s)));
	i = 0;
	last_index = 0;
	while (s[i])
	{
		if (s[i] == (char) c)
			last_index = i;
		i++;
	}
	if (last_index == 0 && s[0] != (char) c)
		return (0);
	return ((char *) s + last_index);
}
