/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yihakan <yihakan@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 23:07:23 by yihakan           #+#    #+#             */
/*   Updated: 2024/10/28 03:26:18 by yihakan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		size;
	int		k;
	char	*trimmed;

	if (!s1 || !set)
		return (NULL);
	i = 0;
	while (s1[i] && ft_strchr(set, s1[i]))
		i++;
	size = ft_strlen(s1);
	while (size > 0 && ft_strchr(set, s1[size - 1]))
		size--;
	if (i > size)
		return (ft_strdup(""));
	trimmed = (char *)malloc(sizeof(char) * (size - i + 1));
	if (!trimmed)
		return (NULL);
	k = 0;
	while (i < size)
		trimmed[k++] = s1[i++];
	trimmed[k] = '\0';
	return (trimmed);
}
