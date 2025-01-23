#include "ft_printf.h"
#include <stdio.h>
#include <limits.h>

int	main(void)
{
	int	count;
	int	ft_count;
	
	count = 0;
	ft_count = 0;

	printf("\tTEST_NULL\n");
	count = printf(NULL);
	ft_count = ft_printf(NULL);
	printf("\nprintf:|%d|\n", count);
	printf("\nft_printf:|%d|\n\n\n", ft_count);



	printf("\n\tTEST_INT\n");
	printf("OG-----int|");
	count = printf("%i", INT_MIN);
	printf("|\n");
	ft_printf("ME-----int|");
	ft_count = printf("%i", INT_MIN);
	printf("|\n");
	printf("\nprintf:%d\n", count);
	printf("ft_printf:%d\n\n", ft_count);

	printf("OG-----int|");
	count = printf("%i", 0);
	printf("|\n");
	ft_printf("ME-----int|");
	ft_count = printf("%i", 0);
	printf("|\n");
	printf("\nprintf:%d\n", count);
	printf("ft_printf:%d\n\n", ft_count);

	printf("OG-----int|");
	count = printf("%i", INT_MAX);
	printf("|\n");
	ft_printf("ME-----int|");
	ft_count = printf("%i", INT_MAX);
	printf("|\n");
	printf("\nprintf:%d\n", count);
	printf("ft_printf:%d\n\n", ft_count);

	printf("OG-----int|");
	count = printf("%i%i%i", INT_MIN, 0, INT_MAX);
	printf("|\n");
	ft_printf("ME-----int|");
	ft_count = printf("%i%i%i", INT_MIN, 0, INT_MAX);
	printf("|\n");
	printf("\nprintf:%d\n", count);
	printf("ft_printf:%d\n\n\n", ft_count);



	printf("\n\tTEST_DECIMAL\n");
	printf("OG-----dec|");
	count = printf("%d", INT_MIN);
	printf("|\n");
	ft_printf("ME-----dec|");
	ft_count = printf("%d", INT_MIN);
	printf("|\n");
	printf("\nprintf:%d\n", count);
	printf("ft_printf:%d\n\n", ft_count);

	printf("OG-----dec|");
	count = printf("%d", 0);
	printf("|\n");
	ft_printf("ME-----dec|");
	ft_count = printf("%d", 0);
	printf("|\n");
	printf("\nprintf:%d\n", count);
	printf("ft_printf:%d\n\n", ft_count);

	printf("OG-----dec|");
	count = printf("%d", INT_MAX);
	printf("|\n");
	ft_printf("ME-----dec|");
	ft_count = printf("%d", INT_MAX);
	printf("|\n");
	printf("\nprintf:%d\n", count);
	printf("ft_printf:%d\n\n", ft_count);

	printf("OG-----dec|");
	count = printf("%d%d%d", INT_MIN, 0, INT_MAX);
	printf("|\n");
	ft_printf("ME-----dec|");
	ft_count = printf("%d%d%d", INT_MIN, 0, INT_MAX);
	printf("|\n");
	printf("\nprintf:%d\n", count);
	printf("ft_printf:%d\n\n\n", ft_count);



	printf("\n\tTEST_UNSIGNED_INT\n");
	printf("OG-----uint|");
	count = printf("%u", 0);
	printf("|\n");
	ft_printf("ME-----uint|");
	ft_count = printf("%u", 0);
	printf("|\n");
	printf("\nprintf:%u\n", count);
	printf("ft_printf:%u\n", ft_count);

	printf("OG-----uint|");
	count = printf("%u", UINT_MAX);
	printf("|\n");
	ft_printf("ME-----uint|");
	ft_count = printf("%u", UINT_MAX);
	printf("|\n");
	printf("\nprintf:%u\n", count);
	printf("ft_printf:%u\n\n", ft_count);

	printf("OG-----uint|");
	count = printf("%u", 1024);
	printf("|\n");
	ft_printf("ME-----uint|");
	ft_count = printf("%u", 1024);
	printf("|\n");
	printf("\nprintf:%u\n", count);
	printf("ft_printf:%u\n\n", ft_count);

	printf("OG-----uint|");
	count = printf("%u%u%u", 0, 1024, UINT_MAX);
	printf("|\n");
	ft_printf("ME-----uint|");
	ft_count = printf("%u%u%u", 0, 1024, UINT_MAX);
	printf("|\n");
	printf("\nprintf:%d\n", count);
	printf("ft_printf:%d\n\n\n", ft_count);



	printf("\n\tTEST_CHAR\n");
	printf("OG-----char|");
	count = printf("%c", '\0');
	printf("|\n");
	ft_printf("ME-----char|");
	ft_count = printf("%c", '\0');
	printf("|\n");
	printf("\nprintf:%d\n", count);
	printf("ft_printf:%d\n\n", ft_count);

	printf("OG-----char|");
	count = printf("%c", 'W');
	printf("|\n");
	ft_printf("ME-----char|");
	ft_count = printf("%c", 'W');
	printf("|\n");
	printf("\nprintf:%d\n", count);
	printf("ft_printf:%d\n\n", ft_count);

	printf("OG-----char|");
	count = printf("%c%c", '\0', 'W');
	printf("|\n");
	ft_printf("ME-----char|");
	ft_count = printf("%c%c", '\0', 'W');
	printf("|\n");
	printf("\nprintf:%d\n", count);
	printf("ft_printf:%d\n\n\n", ft_count);



	printf("\n\tTEST_STRING\n");
	printf("OG-----str|");
	count = printf("%s", NULL);
	printf("|\n");
	ft_printf("ME-----str|");
	ft_count = printf("%s", NULL);
	printf("|\n");
	printf("\nprintf:%d\n", count);
	printf("ft_printf:%d\n\n", ft_count);

	printf("OG-----str|");
	count = printf("%s", "");
	printf("|\n");
	ft_printf("ME-----str|");
	ft_count = printf("%s", "");
	printf("|\n");
	printf("\nprintf:%d\n", count);
	printf("ft_printf:%d\n\n", ft_count);

	printf("OG-----str|");
	count = printf("%s", "Hello");
	printf("|\n");
	ft_printf("ME-----str|");
	ft_count = printf("%s", "Hello");
	printf("|\n");
	printf("\nprintf:%d\n", count);
	printf("ft_printf:%d\n\n", ft_count);

	printf("OG-----str|");
	count = printf("%s%s%s", NULL, "", "Hello");
	printf("|\n");
	ft_printf("ME-----str|");
	ft_count = printf("%s%s%s", NULL, "", "Hello");
	printf("|\n");
	printf("\nprintf:%d\n", count);
	printf("ft_printf:%d\n\n\n", ft_count);



	printf("\n\tTEST_HEX_LOWERCASE\n");
	printf("OG-----hex|");
	count = printf("%x", 0);
	printf("|\n");
	ft_printf("ME-----hex|");
	ft_count = printf("%x", 0);
	printf("|\n");
	printf("\nprintf:%d\n", count);
	printf("ft_printf:%d\n\n", ft_count);

	printf("OG-----hex|");
	count = printf("%x", 1024);
	printf("|\n");
	ft_printf("ME-----hex|");
	ft_count = printf("%x", 1024);
	printf("|\n");
	printf("\nprintf:%d\n", count);
	printf("ft_printf:%d\n\n", ft_count);

	printf("OG-----hex|");
	count = printf("%x", UINT_MAX);
	printf("|\n");
	ft_printf("ME-----hex|");
	ft_count = printf("%x", UINT_MAX);
	printf("|\n");
	printf("\nprintf:%d\n", count);
	printf("ft_printf:%d\n\n", ft_count);

	printf("OG-----hex|");
	count = printf("%x%x%x", 0, 1024, UINT_MAX);
	printf("|\n");
	ft_printf("ME-----hex|");
	ft_count = printf("%x%x%x", 0, 1024, UINT_MAX);
	printf("|\n");
	printf("\nprintf:%d\n", count);
	printf("ft_printf:%d\n\n\n", ft_count);



	printf("\n\tTEST_HEX_UPPERCASE\n");
	printf("OG-----HEX|");
	count = printf("%X", 0);
	printf("|\n");
	ft_printf("ME-----HEX|");
	ft_count = printf("%X", 0);
	printf("|\n");
	printf("\nprintf:%d\n", count);
	printf("ft_printf:%d\n\n", ft_count);

	printf("OG-----HEX|");
	count = printf("%X", 1024);
	printf("|\n");
	ft_printf("ME-----HEX|");
	ft_count = printf("%X", 1024);
	printf("|\n");
	printf("\nprintf:%d\n", count);
	printf("ft_printf:%d\n\n", ft_count);

	printf("OG-----HEX|");
	count = printf("%X", UINT_MAX);
	printf("|\n");
	ft_printf("ME-----HEX|");
	ft_count = printf("%X", UINT_MAX);
	printf("|\n");
	printf("\nprintf:%d\n", count);
	printf("ft_printf:%d\n\n", ft_count);

	printf("OG-----HEX|");
	count = printf("%X%X%X", 0, 1024, UINT_MAX);
	printf("|\n");
	ft_printf("ME-----HEX|");
	ft_count = printf("%X%X%X", 0, 1024, UINT_MAX);
	printf("|\n");
	printf("\nprintf:%d\n", count);
	printf("ft_printf:%d\n\n\n", ft_count);



	printf("\n\tTEST_POINTER\n");
	printf("OG-----ptr|");
	count = printf("%p", NULL);
	printf("|\n");
	ft_printf("ME-----ptr|");
	ft_count = printf("%p", NULL);
	printf("|\n");
	printf("\nprintf:%d\n", count);
	printf("ft_printf:%d\n\n", ft_count);

	printf("OG-----ptr|");
	count = printf("%p", 0);
	printf("|\n");
	ft_printf("ME-----ptr|");
	ft_count = printf("%p", 0);
	printf("|\n");
	printf("\nprintf:%d\n", count);
	printf("ft_printf:%d\n\n", ft_count);

	printf("OG-----ptr|");
	count = printf("%p", "NULL");
	printf("|\n");
	ft_printf("ME-----ptr|");
	ft_count = printf("%p", "NULL");
	printf("|\n");
	printf("\nprintf:%d\n", count);
	printf("ft_printf:%d\n\n", ft_count);

	printf("OG-----ptr|");
	count = printf("%p%p%p", NULL, 0, "NULL");
	printf("|\n");
	ft_printf("ME-----ptr|");
	ft_count = printf("%p%p%p", NULL, 0, "NULL");
	printf("|\n");
	printf("\nprintf:%d\n", count);
	printf("ft_printf:%d\n\n\n", ft_count);



	printf("\n\tTEST_MIX\n");
	printf("OG-----mix|");
	count = printf("%d%i%u%c%s%x%X%p", 0, 0, 0, 'c', "str", 255, 255, "NULL");
	printf("|\n");
	ft_printf("ME-----mix|");
	ft_count = printf("%d%i%u%c%s%x%X%p", 0, 0, 0, 'c', "str", 255, 255, "NULL");
	printf("|\n");
	printf("\nprintf:%d\n", count);
	printf("ft_printf:%d\n\n", ft_count);

	count = printf("OG-----mix\nprc|%%|\nchar|%c|\nstr|%s|\nu_int|%u|\ndec|%d|\nint|%i|\nhex|%x|\nHEX|%X|\nptr|%p|\n", 'W', "yo", UINT_MAX, INT_MAX, INT_MAX, 255, 255, "NULL");
	printf("\n");
	ft_count = ft_printf("ME-----mix\nprc|%%|\nchar|%c|\nstr|%s|\nu_int|%u|\ndec|%d|\nint|%i|\nhex|%x|\nHEX|%X|\nptr|%p|\n", 'W', "yo", UINT_MAX, INT_MAX, INT_MAX, 255, 255, "NULL");
	printf("\nprintf:%d\n", count);
	printf("ft_printf:%d\n\n\n", ft_count);



	// printf("\n\tTEST_WARNINGS\n");
	// count = printf("OG-----s%Q\n");
	// ft_count = ft_printf("ME-----s%Q\n");
	// printf("\nprintf:%d\n", count);
	// printf("ft_printf:%d\n\n", ft_count);

	// count = printf("OG-----d%");
	// printf("\n");
	// ft_count = ft_printf("ME-----d%");
	// printf("\n");
	// printf("\nprintf:%d\n", count);
	// printf("ft_printf:%d\n\n", ft_count);

	// printf("OG-----");
	// count = printf("%");
	// printf("\n");
	// printf("ME-----");
	// ft_count = ft_printf("%");
	// printf("\n");
	// printf("\nprintf:%d\n", count);
	// printf("ft_printf:%d\n\n", ft_count);

	return (0);
}
