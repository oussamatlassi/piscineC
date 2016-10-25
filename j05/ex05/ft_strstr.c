char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (str[i] != '\0')
	{
		while (str[i] == to_find[j])
		{
			i++;
			j++;
			if (to_find[j] == '\0')
				return (to_find);
		}
		i++;
	}
	if(str[i] == '\0')
	{
		return(NULL);
	}
	return (0);
}
