#include <stdio.h>
#include <unistd.h>

void	ft_putchar(char	*str);

void	ft_putchar(char	*str)
{
	int	i;

	i = 0;
	while(str[i] != '\0')
	{
		write(1,&str[i],1);
		i++;
	}
}

int	main()
{
	char	c[] = "Anasssss";

	ft_putchar(c);
}
