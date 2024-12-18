#include "get_next_line.h"
#include <fcntl.h>
#include <stdio.h>

int	main(int c, char *v[])
{
	int		file_test;
	int		fd;
	char	*test;
	int		i;

	if (c < 2)
		return (1);
	fd = 0;
	file_test = atoi(v[1]);
	if (file_test == 0)
		printf("Standard Input Reading\n");
	else if (file_test == 1)
		fd = open("to_read/test.txt", O_RDONLY);
	else if (file_test == 2)
		fd = open("to_read/lorem_ipsum.txt", O_RDONLY);
	else if (file_test == 3)
		fd = open("to_read/vendetta.txt", O_RDONLY);
	else if (file_test == 4)
		fd = open("to_read/bible.txt", O_RDONLY);
	else
		fd = -1;
	i = 1;
	while ((test = get_next_line(fd)) /*&& i < 1*/)
	{
		printf("Line #%d.{%s}\n", i, test);
		free(test);
		i++;
	}
	printf("Line #%d.{%s}\n", i, test);
	close(fd);
	return (0);
}
