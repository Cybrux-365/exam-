#include <unistd.h>

int	main(int ac, char **av)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (j < ac-1)
		j++;
	if (ac > 1)
	{
		while (av[j][i] != '\0')
		{
			write (1, &av[j][i], 1);
			i++;
		}
		write(1, "\n", 1);
	}
	else
		write (1, "\n", 1);
}
