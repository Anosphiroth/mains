#include "get_next_line.h"
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

int	main(void)
{
	main_get_next_line();
	return (0);
}
