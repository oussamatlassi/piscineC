char	*ft_strncat(char *dest, char *src, int nb)
{
	int dest_len;
	int i;

	dest_len = 0;
	i = 0;
	while (dest[dest_len] != '\0')
	{
		dest_len++;
	}
	while (i < nb && src[i] != '\0')
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	dest[dest_len + i] = '\0';
	return (dest);
}
