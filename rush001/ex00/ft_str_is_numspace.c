int	ft_str_is_numspace(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] < 49 || str[i] > 52) && str[i] != ' ')
			return (0);
		i++;
	}
	return (1);
}
