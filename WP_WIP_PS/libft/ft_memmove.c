/* ************************************************************************** */
/*									      */
/*							  :::	   ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*						      +:+ +:+	      +:+     */
/*   By: vaamonch <marvin@42.fr>		    +#+  +:+	   +#+	      */
/*						  +#+#+#+#+#+	+#+	      */
/*   Created: 2024/11/06 15:31:39 by vaamonch	       #+#    #+#	      */
/*   Updated: 2024/11/15 14:13:12 by vaamonch         ###   ########.fr       */
/*									      */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*p_dest;
	char	*p_src;

	if (!dest && !src)
		return (NULL);
	p_dest = (char *)dest;
	p_src = (char *)src;
	if (dest > src)
	{
		p_dest = p_dest + n - 1;
		p_src = p_src + n - 1;
		while (n-- > 0)
			*p_dest-- = *p_src--;
	}
	else
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
		printf("Error : Incorrect input\n");
	printf("\ndest:%s\n", v[1]);
	printf("src:%s\n", v[2]);
	printf("n: %d\n", atoi(v[3]));
	if (v[4])
	{
		printf("Executing memmove(dest, src, n)\n");
		memmove(v[1], v[2], atoi(v[3]));
	}
	else
	{
		printf("Executing ft_memmove(dest, src, n)\n");
		ft_memmove(v[1], v[2], atoi(v[3]));
	}
	printf("dest:%s\n", v[1]);
	return (0);
}
*/
