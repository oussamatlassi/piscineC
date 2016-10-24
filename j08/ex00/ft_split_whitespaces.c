#include <stdlib.h>

int     count_words(char *str)
{
	int i;
	int count;

	i = 0;
	count = 0;
	while (str[i] != '\0')
	{
		if (str[i] != ' ' || str[i] != '\t' || str[i] != '\n')
			count++;
 		i++;
	}
	return (count);
}
 
char    **ft_split_whitespaces(char *str)
{
	int     count;
	int		i;
	int     len;
	char	**str_tmp;
	char    **tab;

	count = 0;
	count = count_words(str);
	while (str[len] != '\0')
		len++;
	tab = (char**)malloc(sizeof(char) * (len + 1));                             
	while (len < count)
	{
		i = 0;
		while (str[i] != ' ' || str[i] != '\t' || str[i] != '\n' || str[i] != '\0')
		{
			*str_tmp[i] = str[i];
			i++;
		}
		tab[len] = *str_tmp;
		len++;
	}
	return (tab);
}