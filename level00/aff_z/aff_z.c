#include <unistd.h>

int	main(int ac, char **av)
{
	int	i;

	i = 0;
	if (ac > 1)
	{
		while (av[1][i] != '\0')
		{
			if (av[1][i] == 122)
			{
				write (1, "z\n", 2);
				return (0);
			}
			i++;
		}
		write (1, "z\n", 2);
	}
	else
		write (1, "z\n", 2);
}
