#include <stdio.h>

int	ft_strncmp(char	*s1, char	*s2, unsigned int	n);

int	ft_strncmp(char	*s1, char	*s2, unsigned int	n)
{
	unsigned int	i;

	i = 0;
	while((s1[i] != '\0' || s2[i] != '\0') && i < n)
	{
		if(s1[i] == s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (0);
}

int	main()
{
	char	a[] = "anass";
	char	c[] = "aass";
	int	z = 4;
	printf("%d",ft_strncmp(a,c,z));
}
