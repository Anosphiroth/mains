/* ************************************************************************** */
/*									      */
/*							  :::	   ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*						      +:+ +:+	      +:+     */
/*   By: vaamonch <marvin@42.fr>		    +#+  +:+	   +#+	      */
/*						  +#+#+#+#+#+	+#+	      */
/*   Created: 2024/11/04 13:49:29 by vaamonch	       #+#    #+#	      */
/*   Updated: 2024/11/04 13:56:16 by vaamonch         ###   ########.fr       */
/*									      */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	return (0);
}
/*
#include <stdio.h>
#include <stdlib.h>

int	main(int c, char *v[])
{
	int	i;
	int	res;

	if (c < 2)
		printf("Error: Incorrect Input\n");
	i = 1;
	while (v[i])
	{
		res = ft_isalnum(atoi(v[i]));
		printf("ft_isalnum(%d): %d\n", atoi(v[i]), res);
		i++;
	}	
	return (0);
}
*/
