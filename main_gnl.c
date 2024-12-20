//#include "get_next_line.h"
//#include "get_next_line_bonus.h"
#include <fcntl.h>
#include <stdio.h>

static int	main_get_next_line(void)
{
	int		fd;
	char	*test;
	int		i;

	fd = 0;
	i = 1;
	printf("Standard Input Reading\nUse Crtl+D To Close\n");
	while ((test = get_next_line(fd)) /*&& i < 1*/)
	{
		printf("Line #%d.{%s}\n", i, test);
		free(test);
		i++;
	}
	printf("Line #%d.{%s}\n\n", i, test);
	close(fd);

	fd = -1;
	i = 1;
	printf("Attempting Invalid File Descriptor Reading\n");
	while ((test = get_next_line(fd)) /*&& i < 1*/)
	{
		printf("Line #%d.{%s}\n", i, test);
		free(test);
		i++;
	}
	printf("\n");
	close(fd);

	fd = open("to_read/test.txt", O_RDONLY);
	i = 1;
	printf("File 'test.txt' Reading\n");
	while ((test = get_next_line(fd)) /*&& i < 1*/)
	{
		printf("Line #%d.{%s}\n", i, test);
		free(test);
		i++;
	}
	printf("Line #%d.{%s}\n\n", i, test);
	close(fd);

	fd = open("to_read/lorem_ipsum.txt", O_RDONLY);
	i = 1;
	printf("File 'lorem_ipsum.txt' Reading\n");
	while ((test = get_next_line(fd)) /*&& i < 1*/)
	{
		printf("Line #%d.{%s}\n", i, test);
		free(test);
		i++;
	}
	printf("Line #%d.{%s}\n\n", i, test);
	close(fd);

	fd = open("to_read/vendetta.txt", O_RDONLY);
	i = 1;
	printf("File 'vendetta.txt' Reading\n");
	while ((test = get_next_line(fd)) /*&& i < 1*/)
	{
		printf("Line #%d.{%s}\n", i, test);
		free(test);
		i++;
	}
	printf("Line #%d.{%s}\n\n", i, test);
	close(fd);

	// fd = open("to_read/bible.txt", O_RDONLY);
	// i = 1;
	// printf("File 'bible.txt' Reading\n");
	// while ((test = get_next_line(fd)) /*&& i < 1*/)
	// {
	// 	printf("Line #%d.{%s}\n", i, test);
	// 	free(test);
	// 	i++;
	// }
	// printf("Line #%d.{%s}\n\n", i, test);
	// close(fd);
	return (0);
}

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

int	main(int c, char *v[])
{
	int	mod;

	if (c < 2)
	{
		printf("Error Incorrect Main Input\n");
		return (1);
	}
	mod = atoi(v[1]);
	if (mod == 0)
		main_get_next_line();
	else if (mod == 1)
		main_get_next_line_bonus();
	else
	{
		printf("Incorrect ArgV Input\n");
		return (2);
	}
	return (0);
}
