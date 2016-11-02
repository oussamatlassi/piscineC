int	ft_atoi(char *str)
{
	int i;
	int result;
	int neg;

	i = 0;
	result = 0;
	neg = 1;
	while (str [i] == ' ' || str[i] == '\t' || str[i] == '\n' || str[i] == '\r' || str[i] == '\v' || str[i] == '\f')
	{
		i++;
	}	
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
		{
			neg = (-1);
		}
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9' && str[i] != '\0')
	{
		result = result * 10 + str[i] - '0';
		i++;
	}
	return (neg * result);
}