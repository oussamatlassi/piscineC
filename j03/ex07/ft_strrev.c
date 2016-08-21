char	*ft_strrev(char *str)
{
	char	tmp;
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	i--;
	while (j <= i)
	{
		tmp = str[j];
		str[j] = str[i];
		str[i] = tmp;
		i--;
		j++;
	}
	return (str);
}
