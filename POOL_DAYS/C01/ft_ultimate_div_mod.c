#include <stdio.h>
#include <unistd.h>

void	ft_putchar(char	c);
void	ft_ultimate_div_mod(int	*a, int	*b);

void	ft_putchar(char	c)
{
	write(1,&c,1);
}

void	ft_ultimate_div_mod(int	*a, int	*b)
{
	int	tmp;

	tmp = *a / *b;
	*b = *a % *b;
	*a = tmp;	
}

int	main()
{
	int	a;
	int	b;

	a = 10;
	b = 5;

	ft_ultimate_div_mod(&a, &b);

	ft_putchar('a');
	ft_putchar('=');
	ft_putchar(a + 48);

	ft_putchar('\n');

	ft_putchar('b');
	ft_putchar('=');
	ft_putchar(b + 48);

	return (0);
}
