#include <stdio.h>

char	*ft_strncpy(char	*dest, char	*src, unsigned int	n);

char	*ft_strncpy(char	*dest, char	*src, unsigned int	n)
{
	unsigned int	i;

	i = 0;
	while(i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while(i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

int main()
{
	char	dest[100];
	printf("%s",ft_strncpy(dest,"Anass is good",7));
	return (0);
}
