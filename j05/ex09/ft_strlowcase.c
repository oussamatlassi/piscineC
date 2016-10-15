char	*ft_lowercase(char *str)
{
	int i;

	i = 0;
	while (str[i] >= 'A' && str[i] <= 'Z')
	{
		str[i] = str[i] + 32;
		i++;
	}
	return (str);
}
