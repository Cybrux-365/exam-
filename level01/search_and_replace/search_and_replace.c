#include <unistd.h>
#include <stdlib.h>

int	main (int ac, char **av)
{
	if (ac == 4)
	{
		int	j;
		int	t;

		j = 0;
		t = 0;
		while (av[2][j] != '\0')
			j++;
		while (av[3][t] != '\0')
			t++;
		if (j == 1 && t == 1)
		{
				int	i;

				i = 0;
			while (av[1][i] != '\0')
			{
				if (av[1][i] == av[2][0])
					write (1, &av[3][0], 1);
				else
					write (1, &av[1][i], 1);
				i++;
			}	
		}
		write (1, "\n", 1);
	}
	else
		write (1, "\n", 1);
	return (0);
}
