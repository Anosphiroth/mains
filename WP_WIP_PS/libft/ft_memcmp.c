/* ************************************************************************** */
/*									      */
/*							  :::	   ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*						      +:+ +:+	      +:+     */
/*   By: vaamonch <marvin@42.fr>		    +#+  +:+	   +#+	      */
/*						  +#+#+#+#+#+	+#+	      */
/*   Created: 2024/11/11 15:50:54 by vaamonch	       #+#    #+#	      */
/*   Updated: 2024/11/11 16:01:10 by vaamonch         ###   ########.fr       */
/*									      */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (*(unsigned char *)s1 != *(unsigned char *)s2)
			return (*(unsigned char *)s1 - *(unsigned char *)s2);
		i++;
		s1 = (unsigned char *)s1 + 1;
		s2 = (unsigned char *)s2 + 1;
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
		printf("Executing memcmp(s1, s2, n): ");
		printf("%d\n", memcmp(v[1], v[2], atoi(v[3])));
	}
	else
	{
		printf("Executing ft_memcmp(s1, s2, n): ");
		printf("%d\n", ft_memcmp(v[1], v[2], atoi(v[3])));
	}
	return (0);
}
*/
