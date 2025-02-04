/* ************************************************************************** */
/*									      */
/*							  :::	   ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*						      +:+ +:+	      +:+     */
/*   By: vaamonch <marvin@42.fr>		    +#+  +:+	   +#+	      */
/*						  +#+#+#+#+#+	+#+	      */
/*   Created: 2024/11/04 14:04:20 by vaamonch	       #+#    #+#	      */
/*   Updated: 2024/11/06 13:16:22 by vaamonch         ###   ########.fr       */
/*									      */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}
/*
#include <stdio.h>
int	main(int c, char *v[])
{
	int	i;
	size_t	res;

	if (c < 2)
		printf("Error: Incorrect Input\n");
	i = 1;
	while (v[i])
	{
		res = ft_strlen(v[i]);
		printf("str: %s\t len: %ld\n", v[i], res);
		i++;
	}
	return (0);
}
*/
