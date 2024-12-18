#include "ft_printf.h"
#include <stdio.h>

int	main(void)
{
	int	count;
	int	ft_count;
	unsigned int	test;
	void	*p1;
	void	*p2;
	void	*p3;
	
	p1 = NULL;
	p2 = NULL;
	p3 = NULL;

	test = -2147483648;
	count = 0;
	ft_count = 0;

	printf("\tTEST_NULL\n");
	count = printf(NULL);
	ft_count = ft_printf(NULL);
	printf("\nprintf:%d\n", count);
	printf("ft_printf:%d\n\n", ft_count);

	printf("\n\tTEST_INT\n");
	count = printf("OG-----int|%i|\n", -10);
	ft_count = ft_printf("ME-----int|%i|\n", -10);
	printf("\nprintf:%d\n", count);
	printf("ft_printf:%d\n\n", ft_count);

	printf("\n\tTEST_DECIMAL\n");
	count = printf("OG-----dec|%d|\n", 19);
	ft_count = ft_printf("ME-----dec|%d|\n", 19);
	printf("\nprintf:%d\n", count);
	printf("ft_printf:%d\n\n", ft_count);

	printf("\n\tTEST_UNSIGNED_INT\n");
	count = printf("OG-----u_int|%u|\n", 659);
	ft_count = ft_printf("ME-----u_int|%u|\n", 659);
	printf("\nprintf:%d\n", count);
	printf("ft_printf:%d\n\n", ft_count);

	printf("\n\tTEST_CHAR\n");
	count = printf("OG-----char|%c|\n", 'A');
	ft_count = ft_printf("ME-----char|%c|\n", 'A');
	printf("\nprintf:%d\n", count);
	printf("ft_printf:%d\n\n", ft_count);

	printf("\n\tTEST_STRING\n");
	count = printf("OG-----str|%s|\n", "test");
	ft_count = ft_printf("ME-----str|%s|\n", "test");
	printf("\nprintf:%d\n", count);
	printf("ft_printf:%d\n\n", ft_count);

	printf("\n\tTEST_HEX_LOWERCASE\n");
	count = printf("OG-----hex|%x|\n", 64);
	ft_count = ft_printf("ME-----hex|%x|\n", 64);
	printf("\nprintf:%d\n", count);
	printf("ft_printf:%d\n\n", ft_count);

	printf("\n\tTEST_HEX_UPPERCASE\n");
	count = printf("OG-----HEX|%X|\n", 64);
	ft_count = ft_printf("ME-----HEX|%X|\n", 64);
	printf("\nprintf:%d\n", count);
	printf("ft_printf:%d\n\n", ft_count);

	printf("\n\tTEST_POINTER\n");
	count = printf("OG-----ptr|%p|\n", p1);
	ft_count = ft_printf("ME-----ptr|%p|\n", p1);
	printf("\nprintf:%d\n", count);
	printf("ft_printf:%d\n\n", ft_count);

	p2 = &count;
	count = printf("OG-----ptr|%p|\n", p2);
	ft_count = ft_printf("ME-----ptr|%p|\n", p2);
	printf("\nprintf:%d\n", count);
	printf("ft_printf:%d\n\n", ft_count);

	p3 = &ft_count;
	count = printf("OG-----ptr|%p|\n", p3);
	ft_count = ft_printf("ME-----ptr|%p|\n", p3);
	printf("\nprintf:%d\n", count);
	printf("ft_printf:%d\n\n", ft_count);

	printf("\n\tTEST_MIX\n");
	count = printf("OG-----plop%d%i%u%c%s%x%X%p\n", 0, 0, 0, 'c', "str", 255, 255, p2);
	ft_count = ft_printf("ME-----plop%d%i%u%c%s%x%X%p\n", 0, 0, 0, 'c', "str", 255, 255, p2);
	printf("\nprintf:%d\n", count);
	printf("ft_printf:%d\n\n", ft_count);

	count = printf("OG-----\nprc|%%|\nchar|%c|\nstr|%s|\nu_int|%u|\ndec|%d|\nint|%i|\nhex|%x|\nHEX|%X|\nptr|%p|\n", 'W', "yo", test, test, test, 255, 255, p3);
	printf("\n");
	ft_count = ft_printf("ME-----\nprc|%%|\nchar|%c|\nstr|%s|\nu_int|%u|\ndec|%d|\nint|%i|\nhex|%x|\nHEX|%X|\nptr|%p|\n", 'W', "yo", test, test, test, 255, 255, p3);
	printf("\nprintf:%d\n", count);
	printf("ft_printf:%d\n\n", ft_count);

	printf("\n\tTEST_PERCENT\n");
	count = printf("OG-----s%Q\n");
	ft_count = ft_printf("ME-----s%Q\n");
	printf("\nprintf:%d\n", count);
	printf("ft_printf:%d\n\n", ft_count);

	count = printf("OG-----d%");
	printf("\n");
	ft_count = ft_printf("ME-----d%");
	printf("\n");
	printf("\nprintf:%d\n", count);
	printf("ft_printf:%d\n\n", ft_count);

	printf("OG-----");
	count = printf("%");
	printf("\n");
	printf("ME-----");
	ft_count = ft_printf("%");
	printf("\n");
	printf("\nprintf:%d\n", count);
	printf("ft_printf:%d\n\n", ft_count);

	return (0);
}
