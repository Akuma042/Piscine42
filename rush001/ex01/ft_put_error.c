void	ft_putchar(char c);

void	ft_put_error(void)
{
	char	*error;
	int		i;

	error = "Error\n";
	i = 0;
	while (error[i])
		ft_putchar(error[i++]);
}
