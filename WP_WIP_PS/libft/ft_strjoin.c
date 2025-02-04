/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vaamonch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 18:32:30 by vaamonch          #+#    #+#             */
/*   Updated: 2024/11/15 19:08:43 by vaamonch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_subjoin(char *dst, const char *src, size_t index)
{
	size_t	i;

	i = 0;
	while (src[i])
	{
		dst[i + index] = src[i];
		i++;
	}
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*new_s;
	size_t	len_s1;
	size_t	len_s2;

	if (!s1 || !s2)
		return (NULL);
	len_s1 = ft_strlen(s1);
	len_s2 = ft_strlen(s2);
	new_s = (char *)ft_calloc(len_s1 + len_s2 + 1, sizeof(char));
	if (new_s == NULL)
		return (new_s);
	ft_subjoin(new_s, s1, 0);
	ft_subjoin(new_s, s2, len_s1);
	return (new_s);
}
