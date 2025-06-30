#include <stdio.h>

int	ft_recursize_power(int	nb, int	power);

int	ft_recursize_power(int	nb, int	power)
{
	int	result;

	result = nb;
	if(power == 0)
		return (1);
	else if(power < 0)
		return (0);
	if(power > 1)
		return (nb * ft_recursize_power(nb, power -1));
	return (result);
}

int	main()
{
	printf("%d",ft_recursize_power(2,2));
}
