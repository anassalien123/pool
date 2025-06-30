#include <stdio.h>
#include <unistd.h>

int	ft_strcmp(char	*s1, char	*s2);

int	ft_strcmp(char	*s1, char	*s2)
{
	int	i;

	i = 0;
	while(s1[i])
	{
		if(s1[i] == s2[i])
		{
			return (1);
		}
		else
		{
			return (0);
		}
	}
}

int	main()
{
	char	s[5] = "Anass";
	char	r[5] = "nass";
	printf("%d",ft_strcmp(s,r));
}
