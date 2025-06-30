#include <stdio.h>

char	*ft_strcpy(char	*dest, char	*src);

char	*ft_strcpy(char	*dest, char	*src)
{
	int	i;

	i = 0;
	while(src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int	main()
{
	char	dest[100];
	printf("%s",ft_strcpy(dest,"Anass is go to be come in student in 1337"));
	return (0);
}
