/* ************************************************************************** */
/*									      */
/*							  :::	   ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*						      +:+ +:+	      +:+     */
/*   By: vaamonch <marvin@42.fr>		    +#+  +:+	   +#+	      */
/*						  +#+#+#+#+#+	+#+	      */
/*   Created: 2024/11/11 16:02:29 by vaamonch	       #+#    #+#	      */
/*   Updated: 2024/11/14 17:46:41 by vaamonch         ###   ########.fr       */
/*									      */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	if (!(little[0]))
		return ((char *)big);
	i = 0;
	while (big[i] && i < len)
	{
		if (big[i] == little[0])
		{
			j = 0;
			while (i + j < len && big[i + j] && big[i + j] == little[j])
				j++;
			if (j == ft_strlen(little))
				return ((char *)big + i);
		}
		i++;
	}
	return (NULL);
}
/*
#include <stdio.h>
#include <bsd/string.h>
int	main(int c, char *v[])
{
	char	*res;

	if (c < 4)
		printf("Error: Incorrect Input\n");
	printf("\nbig:%s\n", v[1]);
	printf("little:%s\n", v[2]);
	printf("len:%d\n", atoi(v[3]));
	if (v[4])
	{
		printf("Executing strnstr(big, little, len)\n");
		res = strnstr(v[1], v[2], atoi(v[3]));
	}
	else
	{
		printf("Executing ft_strnstr(big, little, len)\n");
		res = ft_strnstr(v[1], v[2], atoi(v[3]));
	}
	printf("res:%s\n", res);
	return (0);
}
*/
