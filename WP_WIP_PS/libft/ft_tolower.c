/* ************************************************************************** */
/*									      */
/*							  :::	   ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*						      +:+ +:+	      +:+     */
/*   By: vaamonch <marvin@42.fr>		    +#+  +:+	   +#+	      */
/*						  +#+#+#+#+#+	+#+	      */
/*   Created: 2024/11/04 14:19:15 by vaamonch	       #+#    #+#	      */
/*   Updated: 2024/11/04 14:21:07 by vaamonch         ###   ########.fr       */
/*									      */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
		c = c + 32;
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
		res = ft_tolower(atoi(v[i]));
		printf("ft_tolower(%d): %d\n", atoi(v[i]), res);
		i++;
	}
	return (0);
}
*/
