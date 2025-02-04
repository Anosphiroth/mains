/* ************************************************************************** */
/*									      */
/*							  :::	   ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*						      +:+ +:+	      +:+     */
/*   By: vaamonch <marvin@42.fr>		    +#+  +:+	   +#+	      */
/*						  +#+#+#+#+#+	+#+	      */
/*   Created: 2024/11/06 14:54:11 by vaamonch	       #+#    #+#	      */
/*   Updated: 2024/11/15 14:16:04 by vaamonch         ###   ########.fr       */
/*									      */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char	*p_dest;
	char	*p_src;

	if (!dest && !src)
		return (NULL);
	p_dest = (char *)dest;
	p_src = (char *)src;
	while (n-- > 0)
		*p_dest++ = *p_src++;
	return (dest);
}
/*
#include <stdio.h>
#include <string.h>
int	main (int c, char *v[])
{
	if (c < 4)
		printf("Error: Incorrect input\n");
	printf("\ndest:%s\n", v[1]);
	printf("src:%s\n", v[2]);
	printf("n: %d\n", atoi(v[3]));
	if (v[4])
	{
		printf("Executing memcpy(dest, src, n)\n");
		memcpy(v[1], v[2], atoiv[3]);
	}
	else
	{
		printf("Executing ft_memcpy(dest, src, n)\n");
		ft_memcpy(v[1], v[2], atoi(v[3]));
	}
	printf("dest:%s\n", v[1]);
	return (0);
}
*/
