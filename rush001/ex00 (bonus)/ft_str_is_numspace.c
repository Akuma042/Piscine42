int	ft_str_is_numspace(char *str, char *tab)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] < 48 || str[i] > 48 + tab[0]) && str[i] != ' ')
			return (0);
		i++;
	}
	return (1);
}
