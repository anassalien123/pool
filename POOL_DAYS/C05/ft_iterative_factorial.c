#include <stdio.h>

int	ft_iterative_factorial(int	nb);

int	ft_iterative_factorial(int	nb)
{
	int	result;

	if(nb < 0)
		return (0);
	result = 1;
	while(nb > 0)
	{
		result *= nb;
		nb--;
	}
	return (result);
}

int	main()
{
	int	number = 24;
	printf("%d",ft_iterative_factorial(number));
	return (0);
}
