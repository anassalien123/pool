#include <stdio.h>

int	ft_str_is_printable(char	*str);

int	ft_str_is_printable(char	*str)
{
	int	i;

	i = 0;
	if(str[i] == '\0')
	{
		return (0);
	}
	
	while(str[i] != '\0')
	{
		if(str[i] >= 31 && str[i] <= 126)
		{
			i++;
		}
		else
			return (0);
	}
	return (1);
}
int	main()
{
	printf("%d",ft_str_is_printable("233\n\r\a:w"));
}
