/* ************************************************************************** */
/*									      */
/*							  :::	   ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*						      +:+ +:+	      +:+     */
/*   By: vaamonch <marvin@42.fr>		    +#+  +:+	   +#+	      */
/*						  +#+#+#+#+#+	+#+	      */
/*   Created: 2024/11/07 15:45:15 by vaamonch	       #+#    #+#	      */
/*   Updated: 2024/11/14 17:44:36 by vaamonch         ###   ########.fr       */
/*									      */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	len_dst;
	size_t	len_src;

	len_src = 0;
	while (src[len_src])
		len_src++;
	if (size == 0)
		return (len_src);
	len_dst = 0;
	while (dst[len_dst])
		len_dst++;
	if (size <= len_dst)
		return (size + len_src);
	i = 0;
	while (src[i] && i + len_dst < size - 1)
	{
		dst[i + len_dst] = src[i];
		i++;
	}
	if (i + len_dst < size)
		dst[i + len_dst] = '\0';
	return (len_src + len_dst);
}
/*
#include <stdio.h>
#include <bsd/string.h>
int	main(int c, char *v[])
{
	if (c < 4)
		printf("Error: Incorrect Input\n");
	printf("\ndst:%s\n", v[1]);
	printf("src:%s\n", v[2]);
	printf("size: %d\n", atoi(v[3]));
	if (v[4])
	{
		printf("Executing strlcat(dst, src, size)\n");
		printf("Output: %ld\n", strlcat(v[1], v[2], atoi(v[3])));
	}
	else
	{
		printf("Executing ft_strlcat(dst, src, size)\n");
		printf("Output: %ld\n", ft_strlcat(v[1], v[2], atoi(v[3])));
	}
	printf("dst:%s\n", v[1]);
	return (0);
}
*/
