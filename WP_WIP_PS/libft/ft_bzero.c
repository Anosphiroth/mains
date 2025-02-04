/* ************************************************************************** */
/*									      */
/*							  :::	   ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*						      +:+ +:+	      +:+     */
/*   By: vaamonch <marvin@42.fr>		    +#+  +:+	   +#+	      */
/*						  +#+#+#+#+#+	+#+	      */
/*   Created: 2024/11/06 14:43:31 by vaamonch	       #+#    #+#	      */
/*   Updated: 2024/11/11 18:06:40 by vaamonch         ###   ########.fr       */
/*									      */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		*(char *)s = 0;
		i++;
		s = (char *)s + 1;
	}
}
/*
#include <stdio.h>
#include <string.h>
int	main (int c, char *v[])
{
	int	i;

	if (c < 3)
		printf("Error: Incorrect input\n");
	printf("s:%s\n", v[1]);
	printf("n: %d\n", atoi(v[2]));
	if (v[3])
	{
		printf("Executing bzero(s, n)\n");
		bzero(v[1], atoi(v[2]));
	}
	else
	{
		printf("Executing ft_bzero(s, n)\n");
		ft_bzero(v[1], atoi(v[2]));
	}
	printf("s:%s\n", v[1]);
	i = 0;
	while (v[1] && i <= atoi(v[2]))
	{
		printf("s[%d]:%c\n", i, v[1][i]);
		i++;
	}
	return (0);
}
*/
