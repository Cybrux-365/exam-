#include <unistd.h>

int	main(int ac, char **av)
{
	if (ac == 2)
	{
		int	i;

		i = 0;
		while (av[1][i] != '\0')
		{
			if (av[1][i] >= 'a'  && av[1][i] <= 'z')
			{
				char	c;

				c = 'a';
				write (1, &av[1][i], 1);
				while (c != av[1][i])
				{
					write (1, &av[1][i], 1);
					c += 1;
				}
			}
			else
			{
				char	c;

				c = 'A';
				write (1, &av[1][i], 1);
				while (c != av[1][i])
				{
					write (1, &av[1][i], 1);
					c = c + 1;
				}
			}
			i++;
		}
		write (1, "\n", 1);
	}
	else
		write (1, "\n", 1);
	return (0);
}
