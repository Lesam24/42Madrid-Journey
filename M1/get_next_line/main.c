#include <stdlib.h>
#include <stdio.h>
#include <fcntl.h>
#include "get_next_line.h"

int main()
{
	int	fd;
	char *str1;

	fd = open("test.txt", O_RDONLY);
	while (1)
	{
		str1 = get_next_line(fd);
		if (str1 == NULL)
			break ;
		printf("%s", str1);
		free(str1);
	}
	close(fd);
	return (0);
}