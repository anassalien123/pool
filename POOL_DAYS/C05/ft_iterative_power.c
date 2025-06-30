#include <stdio.h>

int	ft_iterative_power(int	nb, int power);

int	ft_iterative_power(int	nb, int	power)
{
	int	result;

	result = nb;
	if(power == 0)
		return (1);
	else if(power < 0)
		return (0);
	while(power > 1)
	{
		result *= nb;
		power--;
	}
	return (result);
}

int	main()
{
	printf("%d", ft_iterative_power(2,2));
}
