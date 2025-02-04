/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vaamonch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 14:54:26 by vaamonch          #+#    #+#             */
/*   Updated: 2024/11/14 17:59:37 by vaamonch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	unsigned char	*u_s1;
	unsigned char	*u_s2;

	i = 0;
	u_s1 = (unsigned char *)s1;
	u_s2 = (unsigned char *)s2;
	while (i < n && ((u_s1 && u_s1[i]) || (u_s2 && u_s2[i])))
	{
		if (u_s1[i] != u_s2[i])
			return (u_s1[i] - u_s2[i]);
		i++;
	}
	return (0);
}
/*
#include <stdio.h>
#include <string.h>
int	main(int c, char *v[])
{
	if (c < 4)
		printf("Error: Incrrect Input\n");
	printf("\ns1:%s\n", v[1]);
	printf("s2:%s\n", v[2]);
	printf("n: %d\n", atoi(v[3]));
	if (v[4])
	{
		printf("Executing strncmp(s1, s2, n): ");
		printf("%d\n", strncmp(v[1], v[2], atoi(v[3])));
	}
	else
	{
		printf("Executing ft_strncmp(s1, s2, n): ");
		printf("%d\n", ft_strncmp(v[1], v[2], atoi(v[3])));
	}
	return (0);
}
*/
