#include <unistd.h>

void	ft_putchar(char	c);
int	ft_strlen(char	*str);
int	ft_check(char	*base);
void	ft_putnbr_base(int	nb, char	*base);

void	ft_putchar(char	c)
{
	write(1,&c,1);
}

int	ft_strlen(char	*str)
{
	int	i;

	i = 0;
	while(str[i] != '\0')
	{
		i++;
	}
	return (i);
}

int	ft_check(char	*base)
{
	int	i;
	int	j;

	i = 0;
	if(ft_strlen(base) < 2)
		return (0);
	while(base[i] != '\0')
	{
		if(base[i] == '-' || base[i] == '+')
			return (0);
		j = i + 1;
		while(base[j])
		{
			if(base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	ft_putnbr_base(int	nbr, char	*base)
{
	long	nb;
	int	len;

	if(nbr == 0)
	{
		ft_putchar(base[0]);
		return ;
	}

	if(!ft_check(base))
		return ;

	nb = nbr;
	len = ft_strlen(base);
	if(nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	if(nb >= len)
		ft_putnbr_base(nb / len, base);
	ft_putchar(base[nb % len]);
}

int	main()
{
	char	c[] = "12345";
	int	number = 42;
	ft_putnbr_base(number, c);
}
