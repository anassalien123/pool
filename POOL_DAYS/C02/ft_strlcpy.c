#include <stdio.h>

unsigned int	ft_strlcpy(char	*dest, char	*src, unsigned int	size);

unsigned int	ft_strlcpy(char	*dest, char	*src, unsigned int	size)
{
	unsigned int	i;
	unsigned int	len;

	i = 0;
	len = 0;

	while(src[i] != '\0')
	{
		len++;
		i++;
	}
	if(size == 0)
	{
		return (len);
	}
	i = 0;
	while(src[i] && i < size -1)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (len);
}

int	main()
{
	char	dest[100] = "";
	char	src[] = "Anass to star light";
	unsigned int	size = 20;

	unsigned int	len = ft_strlcpy(dest, src, size);

	printf("coiped : %s\n", dest);
	printf("lenght of src : %u\n", len);
}
