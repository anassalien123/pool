#include <stdio.h>
#include <unistd.h>

char	*ft_strcapitalize(char	*str);

void	ft_putchar(char	c)
{
	write(1,&c,1);
}

int	ft_strlen(char	*str)
{
	int	i;

	i = 0;
	while(str[i] != '\0')
	{
		i++;
	}
	return	(i);
}

char	*ft_lowercase(char	*str)
{
	int	i;
	
	i = 0;
	while(str[i] != '\0')
	{
		if(str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] += 32;
		}
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char	*str)
{
	int	i;
	int	x;

	i = 0;
	x = 1;
	ft_lowercase(str);

	while(str[i] != '\0')
	{
		if(str[i] >= 'a' && str[i] <= 'z')
		{
			if(x == 1)
			{
				str[i] -= 32;
			}
			x = 0;
		}
		else if(str[i] >= '0' && str[i] <= '9')
		{
			x = 0;
		}
		else
			x = 1;
		i++;
	}
	return (str);
}

int	main()
{
	char	c[] = "Anass_CHH!II 12mots , 12# nn-in*trkh .| fgf#GT me in fuck in kitchen";
	printf("%s",ft_strcapitalize(c));
}
