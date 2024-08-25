#include <unistd.h>

int	main(int ac, char **av)
{
	if (ac == 3)
	{
		int	count;
		int	scan;

		count = 1;
		write(1, &av[1][0], 1);
		while (av[1][count] != '\0')
		{
			scan = 0;
			while (scan < count)
			{
				if (av[1][scan] != av[1][count])
					scan++;
				else
					break;
			}
			if (count == scan)
				write(1, &av[1][count], 1);
			count++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
