

int	ft_atoi(char *str)
{
long int	i;
long int	sign;
long int	nb;

nb = 0;
i = 0;
sign = 1;
while (str[i] != '\0')
{
	if (str[i] == '-')
		sign = sign * -1;
	else if (str[i] <= '9' && str[i] >= '0')
	{
		nb *= 10;
		nb += str[i] - '0';
	}
	i++;
}
return (nb * sign);
}
