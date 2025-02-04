/* ************************************************************************** */
/*									      */
/*							  :::	   ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*						      +:+ +:+	      +:+     */
/*   By: vaamonch <marvin@42.fr>		    +#+  +:+	   +#+	      */
/*						  +#+#+#+#+#+	+#+	      */
/*   Created: 2024/11/11 15:18:01 by vaamonch	       #+#    #+#	      */
/*   Updated: 2024/11/15 10:07:13 by vaamonch         ###   ########.fr       */
/*									      */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (*(unsigned char *)s == (unsigned char)c)
			return ((void *)s);
		i++;
		s = (char *)s + 1;
	}
	return (NULL);
}
/*
#include <stdio.h>
#include <string.h>
int	main(int c, char *v[])
{
	if (c < 3)
		printf("Error: Incorrect Input\n");
	printf("\ns:%s\n", v[1]);
	printf("c: %c\n", atoi(v[2]));
	printf("n: %d\n", atoi(v[3]));
	if (v[4])
	{
		printf("Executing memchr()\n");
		printf("%s\n", (char *)memchr(v[1], atoi(v[2]), atoi(v[3])));
	}
	else
	{
		printf("Executing ft_memchr()\n");
		printf("%s\n", (char *)ft_memchr(v[1], atoi(v[2]), atoi(v[3])));
	}
	return (0);
}
*/
