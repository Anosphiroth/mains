/* ************************************************************************** */
/*									      */
/*							  :::	   ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*						      +:+ +:+	      +:+     */
/*   By: vaamonch <marvin@42.fr>		    +#+  +:+	   +#+	      */
/*						  +#+#+#+#+#+	+#+	      */
/*   Created: 2024/11/07 14:26:23 by vaamonch	       #+#    #+#	      */
/*   Updated: 2024/11/14 17:38:02 by vaamonch         ###   ########.fr       */
/*									      */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	len;

	len = 0;
	while (src && src[len])
		len++;
	if (size == 0)
		return (len);
	i = 0;
	while (src && src[i] && i < size - 1)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (len);
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
		printf("Executing strlcpy(dst, src, size)\n");
		printf("Output: %ld\n", strlcpy(v[1], v[2], atoi(v[3])));
	}
	else
	{
		printf("Executing ft_strlcpy(dst, src, size)\n");
		printf("Output: %ld\n", ft_strlcpy(v[1], v[2], atoi(v[3])));
	}
	printf("dest:%s\n", v[1]);
	return (0);
}
*/
