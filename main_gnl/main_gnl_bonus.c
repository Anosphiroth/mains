#include "get_next_line_bonus.h"
#include <fcntl.h>
#include <stdio.h>

int main_get_next_line_bonus(void)
{
	int		fd1;
	int		fd2;
	int		fd3;
	int		fd4;
	char	*test;
	int		i;

	fd1 = open("to_read/test.txt", O_RDONLY);
	fd2 = open("to_read/lorem_ipsum.txt", O_RDONLY);
	fd3 = open("to_read/vendetta.txt", O_RDONLY);
	fd4 = open("to_read/bible.txt", O_RDONLY);

	i = 1;
	while (i < 10)
	{
		test = get_next_line(fd1);
		printf("test.txt Line #%d\n{%s}\n", i, test);
		free(test);
		test = get_next_line(fd2);
		printf("lorem_ipsum.txt Line #%d\n{%s}\n", i, test);
		free(test);
		test = get_next_line(fd3);
		printf("vendetta.txt Line #%d\n{%s}\n", i, test);
		free(test);
		test = get_next_line(-1);
		printf("Invalid Line #%d\n{%s}\n", i, test);
		free(test);
		test = get_next_line(fd4);
		printf("bible.txt Line #%d\n{%s}\n", i, test);
		free(test);
		printf("\n");
		i++;
	}
	close(fd1);
	close(fd2);
	close(fd3);
	close(fd4);
	return (0);
}

int	main(void)
{
	main_get_next_line_bonus();
	return (0);
}