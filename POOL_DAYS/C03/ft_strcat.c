#include <stdio.h>

char	*ft_strcat(char	*dest, char	*src);

char	*ft_strcat(char	*dest, char	*src)
{
	int	i;
	int	j;
	while(dest[i] != '\0')
	{
		i++;
	}
	while(src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] != '\0';
	return	(dest);
}

int	main()
{
	char	first[] = "Anass";
	char	last[] = "cheab";

	printf("%s",ft_strcat(first,last));

}
