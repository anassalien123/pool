#include <stdio.h>

void	ft_swap(int	*a, int	*b);

void	ft_swap(int	*a, int	*b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

int	main()
{
	int i,j;

	i = 10;
	j = 15;

	ft_swap(&i,&j);
	printf("%d %d",i,j);
}
