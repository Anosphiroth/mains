/* ************************************************************************** */
/*									      */
/*							  :::	   ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*						      +:+ +:+	      +:+     */
/*   By: vaamonch <marvin@42.fr>		    +#+  +:+	   +#+	      */
/*						  +#+#+#+#+#+	+#+	      */
/*   Created: 2024/11/04 14:14:40 by vaamonch	       #+#    #+#	      */
/*   Updated: 2024/11/04 14:20:57 by vaamonch         ###   ########.fr       */
/*									      */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
		c = c - 32;
	return (c);
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
		res = ft_toupper(atoi(v[i]));
		printf("ft_toupper(%d): %d\n", atoi(v[i]), res);
		i++;
	}
	return (0);
}
*/
