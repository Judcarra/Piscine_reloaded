#include <unistd.h>
#include <fcntl.h>

#define BUF_SIZE 4096

void	ft_display_file(char *filename)
{
	int	fd;
	ssize_t	bytes_read;
	char	buf[BUF_SIZE];

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		write(2, "Cannot read file\n", 17);
		return;
	}
	while ((bytes_read = read(fd, buf, BUF_SIZE)) > 0)
	{
		write(1, buf, bytes_read);
	}
	close(fd);
}

int	main(int argc, char *argv[])
{
	if (argc == 1)
		write(2, "File name missing\n", 18);
	else if (argc > 2)
		write(2, "Too many arguments\n", 19);
	else
		ft_display_file(argv[1]);
	return (0);
}
