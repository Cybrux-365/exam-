#include <unistd.h>

int 	main(void)
{
	int	i;
	char	c;

	i = 1;
	c = 97;
	write (1, &c, 1);
	while (i < 26)
	{
		if (i%2 == 0)
		{
			c = c + 33;
			write (1, &c, 1);
		}
		else
		{
			c = c - 31;
			write (1, &c, 1);
		}
		i++;
	}
	write (1, "\n", 1);
	return (0);
}
