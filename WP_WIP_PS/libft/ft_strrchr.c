/* ************************************************************************** */
/*									      */
/*							  :::	   ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*						      +:+ +:+	      +:+     */
/*   By: vaamonch <marvin@42.fr>		    +#+  +:+	   +#+	      */
/*						  +#+#+#+#+#+	+#+	      */
/*   Created: 2024/11/11 14:36:26 by vaamonch	       #+#    #+#	      */
/*   Updated: 2024/11/15 11:44:12 by vaamonch         ###   ########.fr       */
/*									      */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	if ((unsigned char)c == '\0')
		return ((char *)s + i);
	i--;
	while (i >= 0)
	{
		if (s[i] == (unsigned char)c)
			return ((char *)s + i);
		i--;
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
		printf("Executing strrchr()\n");
		printf("%s\n", strrchr(v[1], atoi(v[2])));
	}
	else
	{
		printf("Executing ft_strrchr()\n");
		printf("%s\n", ft_strrchr(v[1], atoi(v[2])));
	}
	return (0);
}
*/
