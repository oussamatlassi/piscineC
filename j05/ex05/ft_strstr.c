char	*ft_strstr(char *str, char *to_find)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (str[i] != '\0')
	{
		while (str[i] != '\0' && to_find[j] != '\0' && str[i] == to_find[j])
		{
			i++;
			j++;
		}
		if (!to_find[j])
			return (str + i - j);
		i++;
	}
	return (0);
}
