int	ft_atoi(const char *str)
{
	int	index;
	int	nb;
	int	negative;

	index = 0;
	nb = 0;
	negative = 0;
	while (str[index] == 32 || str[index] >= 9 && str[index] <= 13)
		index++;
	if (str[index] == '-' || str[index] == '+')
	{
		if (str[index] == '-')
			negative++;
		index++;
	}
	while (str[index] >= 48 && str[index] <= 57)
	{
		nb = nb * 10 + (str[index] - 48);
		index++;
	}
	if (negative == 1)
		return (-nb);
	return (nb);
}
