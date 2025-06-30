#include <unistd.h>
#include <stdio.h>

void	ft_stdlen(char	*len);

void	ft_stdlen(char	*len)
{
	int	i;

	i = 0;
	while(len[i] != '\0')
	{
		write(1,&len[i],1);
		i++;
	}
	//return (i);
}
int	main()
{
	ft_stdlen("anass");
}
