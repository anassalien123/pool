#include <unistd.h>
#include <stdio.h>

char	*ft_strncat(char	*dest, char	*src, int	nb);

char	*ft_strncat(char	*dest, char	*src, int	nb)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while(dest[i] != '\0')
	{
		i++;
	}
	while(src[j] != '\0' && j < nb)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] != '\0';
	return (dest);
}

int	main()
{
	char	frist[] = "Anasss";
	char	last[] = "cheab";
	int	n = 4;
	printf("%s", ft_strncat(frist,last,n));
}
