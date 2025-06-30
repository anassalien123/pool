#include <stdio.h>

unsigned int	ft_strlcat(char	*dest, char	*src, unsigned int	size);
int	ft_strlen(char	*str);

int	ft_strlen(char	*str)
{
	int	i;

	i = 0;
	while(str[i])
	{
		i++;
	}
	return (i);
}
unsigned int	ft_strlcat(char	*dest, char	*src, unsigned int	size)
{
	int	i;
	int	j;
	int	lsrc;
	int	ldest;

	i = 0;
	j = 0;
	while(dest[i])
	{
		i++;
	}
	ldest = i;
	lsrc = ft_strlen(src);
	if(size == 0 || size < ldest)
	{
		return	(lsrc + size);
	}
	while(src[j] != '\0' && j < size - ldest -1)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (ldest + lsrc);
}

int	main()
{
	char	frist[20] = "Anass ";
	char	last[] = "chaeb";
	unsigned int	nb = 12;
	unsigned int	result = ft_strlcat(frist,last,nb);
	printf("%zu\n", result);
	printf("%s", frist);

}
