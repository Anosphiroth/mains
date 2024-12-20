//#include "libft.h"
#include <stdio.h>
#include <string.h>
#include <bsd/string.h>

int	main(int c, char *v[])
{
	/*
	int	i;
	int	res;
	int	ft_res;

	//	FT_ATOI
	//
	if (c < 2)
		printf("Error: Incorrect Input\n");
	i = 1;
	while (v[i])
	{
		res = atoi(v[i]);
		ft_res = ft_atoi(v[i]);
		printf("atoi(%s): %d\n", v[i], res);
		printf("ft_atoi(%s): %d\n\n", v[i], ft_res);
		i++;
	}
	*/
	/*
	//	FT_BZERO
	//
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
	*/
	/*
	//	FT_CALLOC
	//
	int	*tab;
	size_t	i;

	if (c < 2)
		printf("Error: Incorrect Input\n");
	printf("\nnmemb: %d\n", atoi(v[1]));
	printf("size: %ld\n", sizeof(unsigned long int));
	if (v[2])
	{
		printf("Executing calloc(nmemb, size)\n");
		tab = (int *)calloc(atoi(v[1]), sizeof(int));
	}
	else
	{
		printf("Executing ft_calloc(nmemb, size)\n");
		tab = (int *)ft_calloc(atoi(v[1]), sizeof(int));
	}
	i = 0;
	while (i < atoi(v[1]) * sizeof(int))
	{
		printf("tab[%ld]: %d\n", i, tab[i]);
		i++;
	}
	if (tab != NULL)
		free(tab);
	*/
	/*
	//	FT_ISALNUM
	//
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
	*/
	/*
	//	FT_ISALPHA
	//
	int	i;
	int	res;

	if (c < 2)
		printf("Error: Incorrect Input\n");
	i = 1;
	while (v[i])
	{
		res = ft_isalpha(atoi(v[i]));
		printf("ft_isalpha(%d): %d\n", atoi(v[i]), res);
		i++;
	}
	*/
	/*
	//	FT_ISASCII
	//
	int     i;
        int     res;

        if (c < 2)
                printf("Error: Incorrect Input\n");
        i = 1;
        while (v[i])
        {
                res = ft_isascii(atoi(v[i]));
                printf("ft_isascii(%d): %d\n", atoi(v[i]), res);
                i++;
        }
	*/
	/*
	//	FT_ISDIGIT
	//
	int	i;
	int	res;

	if (c < 2)
		printf("Error: Incorrect Input\n");
	i = 1;
	while (v[i])
	{
		res = ft_isdigit(atoi(v[i]));
		printf("ft_isdigit(%d): %d\n", atoi(v[i]), res);
		i++;
	}
	*/
	/*
	//	FT_ISPRINT
	//
	int	i;
	int	res;

	if (c < 2)
		printf("Error: Incorrect Input\n");
	i = 1;
	while (v[i])
	{
		res = ft_isprint(atoi(v[i]));
		printf("ft_isprint(%d): %d\n", atoi(v[i]), res);
		i++;
	}
	*/
	/*
	//	FT_ITOA
	//
	size_t	i;

	if (c < 2)
		printf("Error: Incorrect Input\n");
	i = 1;
	while (v[i])
	{
		printf("\nn: %d\n", atoi(v[i]));
		//printf("\nft_count_digits(n): ");
		//printf("%ld\n", ft_count_digits(atoi(v[i])));
		printf("ft_itoa(n):%s\n", ft_itoa(atoi(v[i])));
		i++;
	}
	*/
	/*
	//	FT_MEMCHR
	//
	if (c < 3)
		printf("Error: Incorrect Input\n");
	printf("\ns:%s\n", v[1]);
	printf("c: %c\n", atoi(v[2]));
	printf("n: %d\n", atoi(v[3]));
	if (v[4])
	{
		printf("Executing memchr()\n");
		printf("%s\n", (char *)memchr(v[1], atoi(v[2]), atoi(v[3])));
	}
	else
	{
		printf("Executing ft_memchr()\n");
		printf("%s\n", (char *)ft_memchr(v[1], atoi(v[2]), atoi(v[3])));
	}
	*/
	/*
	//	FT_MEMCMP
	//
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
	*/
	/*
	//	FT_MEMCPY
	//
	if (c < 4)
		printf("Error: Incorrect input\n");
	printf("\ndest:%s\n", v[1]);
	printf("src:%s\n", v[2]);
	printf("n: %d\n", atoi(v[3]));
	if (v[4])
	{
		printf("Executing memcpy(dest, src, n)\n");
		memcpy(v[1], v[2], atoi[3]);
	}
	else
	{
		printf("Executing ft_memcpy(dest, src, n)\n");
		ft_memcpy(v[1], v[2], atoi(v[3]));
	}
	printf("dest:%s\n", v[1]);
	*/
	/*
	//	FT_MEMMOVE
	//
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
	*/
	/*
	//	FT_MEMSET
	//
	if (c < 4)
		printf("Error: Incorrect input\n");
	printf("\ns:%s\n", v[1]);
	printf("c: %c\n", atoi(v[2]));
	printf("n: %d\n", atoi(v[3]));
	if (v[4])
	{
		printf("Executing memset(s, c, n)\n");
		memset(v[1], atoi(v[2]), atoi(v[3]));
	}
	else
	{
		printf("Executing ft_memset(s, c, n)\n");
		ft_memset(v[1], atoi(v[2]), atoi(v[3]));
	}
	printf("s:%s\n", (char *)v[1]);
	*/
	/*
	//	FT_SPLIT
	//
	char	**s_arr;
	int	i;

	if (c < 3 && v[2])
		printf("Error: Incorrect Input\n");
	printf("\ns:%s\n", v[1]);
	printf("c: %c\n", v[2][0]);
	printf("Executing ft_split(s, c)\n");
	s_arr = ft_split(v[1], v[2][0]);
	printf("Number of susstring needed: %ld\n", ft_count_word(v[1], v[2][0]));
	printf("s_arr:%p\n", s_arr);
	if (s_arr)
	{
		while (s_arr[i])
		{
			printf("s_arr[%d]:%s\n", i, s_arr[i]);
			free(s_arr[i]);
			i++;
		}
		printf("s_arr[%d]:%s\n", i, s_arr[i]);
		free(s_arr);
	}
	*/
	/*
	//	FT_STRCHR
	//
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
	*/
	/*
	//	FT_STRDUP
	//
	char	*new_s;
	if (c < 2)
		printf("Error: Incorrect Input\n");
	printf("\ns:%s\n", v[1]);
	if (v[2])
	{
		printf("Executing strdup(s)\n");
		new_s = strdup(v[1]);
	}
	else
	{
		printf("Executing ft_strdup(s)\n");
		new_s = ft_strdup(v[1]);
	}
	printf("new_s:%s\n", new_s);
	if (new_s != NULL)
		free(new_s);
	*/
	/*
	//	FT_STRLCAT
	//
	if (c < 4)
		printf("Error: Incorrect Input\n");
	printf("\ndst:%s\n", v[1]);
	printf("src:%s\n", v[2]);
	printf("size: %d\n", atoi(v[3]));
	if (v[4])
	{
		printf("Executing strlcat(dst, src, size)\n");
		printf("Output: %ld\n", strlcat(v[1], v[2], atoi(v[3])));
	}
	else
	{
		printf("Executing ft_strlcat(dst, src, size)\n");
		printf("Output: %ld\n", ft_strlcat(v[1], v[2], atoi(v[3])));
	}
	printf("dst:%s\n", v[1]);
	*/
	/*
	//	FT_STRLCPY
	//
	if (c < 4)
		printf("Error: Incorrect Input\n");
	printf("\ndst:%s\n", v[1]);
	printf("src:%s\n", v[2]);
	printf("size: %d\n", atoi(v[3]));
	if (v[4])
	{
		printf("Executing strlcpy(dst, src, size)\n");
		printf("Output: %ld\n", strlcpy(v[1], v[2], atoi(v[3])));
	}
	else
	{
		printf("Executing ft_strlcpy(dst, src, size)\n");
		printf("Output: %ld\n", ft_strlcpy(v[1], v[2], atoi(v[3])));
	}
	printf("dest:%s\n", v[1]);
	*/
	/*
	//	FT_STRLEN
	//
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
	*/
	/*
	//	FT_STRNCMP
	//
	if (c < 4)
		printf("Error: Incrrect Input\n");
	printf("\ns1:%s\n", v[1]);
	printf("s2:%s\n", v[2]);
	printf("n: %d\n", atoi(v[3]));
	if (v[4])
	{
		printf("Executing strncmp(s1, s2, n): ");
		printf("%d\n", strncmp(v[1], v[2], atoi(v[3])));
	}
	else
	{
		printf("Executing ft_strncmp(s1, s2, n): ");
		printf("%d\n", ft_strncmp(v[1], v[2], atoi(v[3])));
	}
	*/
	/*
	//	FT_STRNSTR
	//
	char	*res;

	if (c < 4)
		printf("Error: Incorrect Input\n");
	printf("\nbig:%s\n", v[1]);
	printf("little:%s\n", v[2]);
	printf("len:%d\n", atoi(v[3]));
	if (v[4])
	{
		printf("Executing strnstr(big, little, len)\n");
		res = strnstr(v[1], v[2], atoi(v[3]));
	}
	else
	{
		printf("Executing ft_strnstr(big, little, len)\n");
		res = ft_strnstr(v[1], v[2], atoi(v[3]));
	}
	printf("res:%s\n", res);
	*/
	/*
	//	FT_STRRCHR
	//
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
	*/
	/*
	//	FT_STRTRIM
	//
	if (c < 3)
		printf("Error: Incorrect Input\n");
	printf("\ns:%s\n", v[1]);
	printf("set: |%s|\n", v[2]);
	printf("Executing ft_strtrim(s, set)\n");
	printf("new_s:%s\n", ft_strtrim(v[1], v[2]));
	*/
	/*
	//	FT_TOLOWER
	//
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
	*/
	/*
	//	FT_TOUPPER
	//
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
	*/
	/*
	//	FT_LSTNEW
	//
	t_list	*lst;

	lst = ft_lstnew("1.plop");
	lst->next = ft_lstnew("2.plop");
	lst->next->next = ft_lstnew("3.plop");
	while (lst)
	{
		printf("%s\n", (char *)lst->content);
		lst = lst->next;
	}
	*/
	/*
	//	FT_LSTLAST
	//
	t_list	*lst;

	lst = ft_lstnew("1.plop");
	lst->next = ft_lstnew("2.plop");
	lst->next->next = ft_lstnew("3.plop");
	printf("%s\n", (char *)ft_lstlast(lst)->content);
	*/
	/*
	//	FT_LSTSIZE
	//
	t_list	*lst;
	int		size;

	lst = ft_lstnew("1.plop");
	lst->next = ft_lstnew("2.plop");
	lst->next->next = ft_lstnew("3.plop");
	size = ft_lstsize(lst);
	printf("%d\n", size);
	*/
	/*
	//	FT_LSTADD_FRONT
	//
	t_list	*lst;
	t_list	*new;

	lst = ft_lstnew("1.plop");
	lst->next = ft_lstnew("2.plop");
	lst->next->next = ft_lstnew("3.plop");
	
	new = ft_lstnew("0.plop");
	ft_lstadd_front(&lst, new);
	while (lst)
	{
		printf("%s\n", (char *)lst->content);
		lst = lst->next;
	}
	*/
	/*
	//	FT_LSTADD_BACK
	t_list	*lst;
	t_list	*new;

	lst = ft_lstnew("1.plop");
	lst->next = ft_lstnew("2.plop");
	lst->next->next = ft_lstnew("3.plop");
	new = ft_lstnew("plop");
	ft_lstadd_back(&lst, new);
	printf("%s\n", (char *)ft_lstlast(lst)->content);
	*/
	/*
	//	FT_LSTDELONE
	//
	t_list	*lst1;
	t_list	*lst2;
	t_list	*lst3;

	lst1 = ft_lstnew("1.plop");
	lst2 = ft_lstnew("2.plop");
	lst3 = ft_lstnew("3.plop");
	lst1->next = lst2;
	lst2->next = lst3;
	//
	ft_lstdelone(lst2, del_c);
	printf("%s\n", (char *)lst1->content);
	printf("%s\n", (char *)lst3->content);
	printf("%s\n", (char *)lst2->content);
	*/
	/*
	//	FT_LSTCLEAR
	//
	t_list	*lst1;
	t_list	*lst2;
	t_list	*lst3;

	lst1 = ft_lstnew("1.plop");
	lst2 = ft_lstnew("2.plop");
	lst3 = ft_lstnew("3.plop");
	lst1->next = lst2;
	lst2->next = lst3;
	//
	ft_lstclear(lst2, del_c);
	printf("%s\n", (char *)lst1->content);
	printf("%s\n", (char *)lst3->content);
	printf("%s\n", (char *)lst2->content);
	*/
	(void)c;
	(void)v;
	return (0);
}
