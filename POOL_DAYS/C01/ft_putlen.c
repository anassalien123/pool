#include <stdio.h>

int	ft_strlen(char	*str);

int	ft_strlen(char	*str)
{
	int	i;

	i = 0;

	while(str[i] != '\0')
	{
		i++;
	}
	return (i);
}

int	main()
{
	char	src[] = "Anass";
	printf("%d",ft_strlen(src));
}
