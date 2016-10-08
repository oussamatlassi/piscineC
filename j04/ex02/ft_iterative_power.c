int	ft_iterative_power(int nb, int power)
{
	int i;

	i = 0;
	if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	else if (power == 1)
		return (nb);
	while (i != power)
	{
		nb *= nb;
		i++;
	}
	return (nb);
}
