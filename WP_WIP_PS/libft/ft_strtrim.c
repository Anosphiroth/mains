/* ************************************************************************** */
/*										   */
/*								:::	   ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*							   +:+ +:+	      +:+     */
/*   By: vaamonch <marvin@42.fr>			 +#+  +:+	   +#+	      */
/*							+#+#+#+#+#+	+#+	      */
/*   Created: 2024/11/16 16:26:38 by vaamonch		    #+#    #+#	      */
/*   Updated: 2024/11/16 18:14:37 by vaamonch         ###   ########.fr       */
/*										   */
/* ************************************************************************** */

#include "libft.h"

static int	ft_in_set(char c, char const *set)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

static char	*ft_substrim(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	char	*p_s;
	size_t	i;

	sub = (char *)malloc((len + 1) * sizeof(char));
	if (sub == NULL)
		return (sub);
	i = 0;
	p_s = (char *)s;
	while (i < len && p_s[i + start])
	{
		sub[i] = p_s[i + start];
		i++;
	}
	sub[i] = '\0';
	return (sub);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*new_s;
	size_t	len;
	size_t	start;
	size_t	end;

	if (!s1)
		return (NULL);
	if (!set)
	{
		new_s = ft_strdup(s1);
		return (new_s);
	}
	len = ft_strlen(s1);
	start = 0;
	while (start < len && s1[start] && ft_in_set(s1[start], set))
		start++;
	end = len - 1;
	while (end > 0 && s1[end] && ft_in_set(s1[end], set))
		end--;
	if (start > end)
		len = 0;
	else
		len = end - start + 1;
	new_s = ft_substrim(s1, start, len);
	return (new_s);
}
/*
#include <stdio.h>

int	main(int c, char *v[])
{
	if (c < 3)
		printf("Error: Incorrect Input\n");
	printf("\ns:%s\n", v[1]);
	printf("set: |%s|\n", v[2]);
	printf("Executing ft_strtrim(s, set)\n");
	printf("new_s:%s\n", ft_strtrim(v[1], v[2]));
	return (0);
}
*/
