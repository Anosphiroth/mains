/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vaamonch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 15:47:18 by vaamonch          #+#    #+#             */
/*   Updated: 2024/11/15 10:22:15 by vaamonch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		*(unsigned char *)s = (unsigned char)c;
		i++;
		s = (char *)s + 1;
	}
	return ((void *)s - i);
}
/*
#include <stdio.h>
#include <string.h>
int	main(int c, char *v[])
{
	if (c < 4)
		printf("Error: Incorrect input\n");
	printf("\ns:%s\n", v[1]);
	printf("c: %c\n", atoi(v[2]));
	printf("n: %d\n", atoi(v[3]));
	if (v[4])
	{
		printf("Executing memset(s, c, n)\n");
		memset(v[1], atoi(v[2]), atoi(v[3]));
	}
	else
	{
		printf("Executing ft_memset(s, c, n)\n");
		ft_memset(v[1], atoi(v[2]), atoi(v[3]));
	}
	printf("s:%s\n", (char *)v[1]);
	return (0);
}
*/
