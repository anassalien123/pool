#include <unistd.h>

void	ft_putchar(char	c);
void	ft_rev_int_tab(int	*tab, int	size);

void	ft_putchar(char	c)
{
	write(1,&c,1);
}

void	ft_rev_int_tab(int	*tab, int	size)
{
	int	first;
	int	last;
	int	tmp;

	first = 0;
	last = size - 1;

	while(first < last)
	{
		tmp = tab[first];
		tab[first] = tab[last];
		tab[last] = tmp;
		first++;
		last--;
	}
}

int	main()
{
	int	arr[5] = {1,2,3,4,5};
	int	i;

	ft_rev_int_tab(arr, 5);

	i = 0;
	while(i < 5)
	{
		ft_putchar(arr[i] + 48);
		i++;
	}
	return (0);
}
