#include <stdio.h>

int	ft_atio(char	*str);

int	ft_atio(char	*str)
{
	int	i;
	int	sign;
	int	result;

	while(str[i] >= 9 && str[i] <= 13 || str[i] == 32)
	{
		i++;
	}
	while(str[i] == '-' || str[i] == '+')
	{
		if(str[i] == '-')
		{
			sign++;
		}
		i++;
	}
	while(str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}
	if(sign % 2 != 0)
	{
		return (result * (-1));
	}
	else
	{
		return (result);
	}
}

int	main()
{
	char	src[] = "\t\f\r\v\n  -------++++212";
	printf("%d",ft_atio(src));
}
