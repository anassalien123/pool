#include <stdio.h>

char	*ft_strstr(char	*str, char	*to_find);

char	*ft_strstr(char	*str, char	*to_find)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if(to_find[j] == '\0')
	{
		return (str);
	}
	while(str[i] != '\0')
	{
		while(str[i + j] == to_find[j] && to_find[j] != '\0')
		{
			j++;
		}
		if(to_find[j] == '\0')
			return (&str[i]);
		i++;
		j = 0;
	}
	return (0);
}

int	main()
{
	char	src[] = "Anass u can do what u want if u kill the brain sound";
	char	find[] = "if";
	printf("%s", ft_strstr(src,find));
	return (0);
}
