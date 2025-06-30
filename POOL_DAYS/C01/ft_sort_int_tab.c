#include <unistd.h>

void	ft_putchar(char	c);
void	ft_sort_int_tab(int	*tab, int	size);

void	ft_putchar(char	c)
{
	write(1,&c,1);
}

void	ft_sort_int_tab(int	*tab, int	size)
{
	int	swap;
	int	i;
	
	while(size >= 0)
	{
		i = 0;
		while(i < size - 1)
		{
			if(tab[i] > tab[i + 1])
			{
				swap = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = swap;
			}
			i++;
		}
		size--;
	}
}

int	main()
{
	int	arr[5] = {2,1,4,5,7};
	int	i;

	ft_sort_int_tab(arr, 5);
	i = 0;

	while(i < 5)
	{
		ft_putchar(arr[i] + 48);
		i++;
	}
	return (0);

}
