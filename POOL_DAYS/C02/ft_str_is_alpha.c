#include <stdio.h>

int	ft_str_is_alpha(char	*str);

int	ft_str_is_alpha(char	*str)
{
	int	i;

	i = 0;

	if(str[i] == '\0')
	{
		return (1);
	}

	while(str[i] != '\0')
	{
		if((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
		{
			i++;
		}
		else
		{
			return (0);
		}
	}
	return (1);
}

int main()
{
	printf("%d",ft_str_is_alpha("dvsd121:wqssdsdf"));

}
