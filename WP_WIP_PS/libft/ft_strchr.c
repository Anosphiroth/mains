/* ************************************************************************** */
/*									      */
/*							  :::	   ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*						      +:+ +:+	      +:+     */
/*   By: vaamonch <marvin@42.fr>		    +#+  +:+	   +#+	      */
/*						  +#+#+#+#+#+	+#+	      */
/*   Created: 2024/11/04 14:23:51 by vaamonch	       #+#    #+#	      */
/*   Updated: 2024/11/15 11:44:29 by vaamonch         ###   ########.fr       */
/*									      */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	if ((unsigned char)c == '\0')
		return ((char *)s + i);
	i = 0;
	while (s[i])
	{
		if (s[i] == (unsigned char)c)
			return ((char *)s + i);
		i++;
	}
	return (NULL);
}
/*
#include <stdio.h>
#include <string.h>
int	main(int c, char *v[])
{
	if (c < 3)
		printf("Error: Incorrect Input\n");
	printf("\nstr:%s\n", v[1]);
	printf("c: %c\n", atoi(v[2]));
	if (v[3])
	{
		printf("Executing strchr()\n");
		printf("%s\n", strchr(v[1], atoi(v[2])));
	}
	else
	{
		printf("Executing ft_strchr()\n");
		printf("%s\n", ft_strchr(v[1], atoi(v[2])));
	}
	return (0);
}
*/
