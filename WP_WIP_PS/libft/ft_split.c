/* ************************************************************************** */
/*											*/
/*								:::		::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*								+:+ +:+	      +:+     */
/*   By: vaamonch <marvin@42.fr>				+#+  +:+	   +#+	      */
/*							+#+#+#+#+#+	+#+		   */
/*   Created: 2024/11/16 17:41:39 by vaamonch			 #+#    #+#	      */
/*   Updated: 2024/11/19 15:17:14 by vaamonch         ###   ########.fr       */
/*											*/
/* ************************************************************************** */

#include "libft.h"

size_t	ft_count_word(char const *s, char c)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i])
		{
			count++;
			while (s[i] && s[i] != c)
				i++;
		}
	}
	return (count);
}

static char	*ft_sub_split(char const *src, int c, size_t index)
{
	char	*dst;
	size_t	len;
	size_t	i;

	len = 0;
	while (src[index + len] && src[index + len] != c)
		len++;
	dst = (char *)malloc((len + 1) * sizeof(char));
	if (!dst)
		return (NULL);
	i = 0;
	while (i < len && src[index + i])
	{
		dst[i] = src[index + i];
		i++;
	}
	dst[i] = 0;
	return (dst);
}

static char	**ft_free_arr(char **arr)
{
	size_t	i;

	i = 0;
	while (arr[i])
	{
		free(arr[i]);
		i++;
	}
	free(arr);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char	**s_arr;
	size_t	i;
	size_t	j;

	if (!s)
		return (NULL);
	s_arr = (char **)malloc((ft_count_word(s, c) + 1) * sizeof(char *));
	if (!s_arr)
		return (NULL);
	i = 0;
	j = 0;
	while (j < ft_count_word(s, c) && s[i])
	{
		while (s[i] == c)
			i++;
		s_arr[j] = ft_sub_split(s, c, i);
		if (!s_arr[j])
			return (ft_free_arr(s_arr));
		j++;
		while (s[i] && s[i] != c)
			i++;
	}
	s_arr[j] = NULL;
	return (s_arr);
}
/*
#include <stdio.h>

int	main(int c, char *v[])
{
	char	**s_arr;
	int		i;

	if (c < 3 && v[2])
		printf("Error: Incorrect Input\n");
	printf("\ns:%s\n", v[1]);
	printf("c: %c\n", v[2][0]);
	printf("Executing ft_split(s, c)\n");
	s_arr = ft_split(v[1], v[2][0]);
	printf("Number of susstring needed: %ld\n", ft_count_word(v[1], v[2][0]));
	printf("s_arr:%p\n", s_arr);
	if (s_arr)
	{
		while (s_arr[i])
		{
			printf("s_arr[%d]:%s\n", i, s_arr[i]);
			free(s_arr[i]);
			i++;
		}
		printf("s_arr[%d]:%s\n", i, s_arr[i]);
		free(s_arr);
	}
	return (0);
}
*/
