#include <stdio.h>
#include <unistd.h>

void	ft_div_mod(int	a, int	b, int	*div, int	*mod);


void	ft_div_mod(int	a, int	b, int	*div, int	*mod)
{
	*div = a / b;
	*mod = a % b;
}

int	main()
{
	int	a;
	int	b;
	int	x;
	int	y;

	a = 10;
	b = 5;
	ft_div_mod(a,b,&x,&y);
	printf("%d %d \n",a,b);
	printf("%d %d",x,y);
}
