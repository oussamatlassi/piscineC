int	ft_is_prime(int nb)
{
	int i;

	i = 2;
	while (nb % i != 0)
	{
		if (i > nb)
			break;
		i++;
	}
	if (i == nb)
		return (1);
	else
		return (0);
}
