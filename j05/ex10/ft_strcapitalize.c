int	char_min(char c)
{
	if ((c >= 'a') && (c <= 'z'))
		return (1);
	return (0);
}

int	char_maj(char c)
{	
	if ((c >= 'A') && (c <= 'Z'))
		return (1);
	return (0);
}

int	char_alpha_num(char c)
{
	if ((c >= 'a') && (c <= 'z'))
		return (1);
	if ((c >= 'A') && (c <= 'Z'))
		return (1);
	if ((c >= '0') && (c <= '9'))
		return (1);
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (str[i])
	{
		if ((char_min(str[i])) && (j == 0))
			str[i] = str[i] - 32;
		else if ((char_maj(str[i])) && (j == 1))
			str[i] = str[i] + 32;
		if (!(char_alpha_num(str[i])))
			j = 0;
		else
			j = 1;
		i++;
	}
	return (str);
}
