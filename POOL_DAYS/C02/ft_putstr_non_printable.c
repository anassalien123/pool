#include <stdio.h>
#include <unistd.h>

void	ft_putstr_non_printable(char	*str);
void	ft_char_to_hexa(char	st);
void	ft_putchar(char	c);

void	ft_putchar(char	c)
{
	write(1,&c,1);
}
void	ft_char_to_hexa(char	st)
{
	char	*hex;

	hex = "0123456789abcdef";
	ft_putchar('\\');
	ft_putchar(hex[st / 16]);
	ft_putchar(hex[st % 16]);

}

void	ft_putstr_non_printable(char	*str)
{
	int	i;

	i = 0;
	while(str[i] != '\0')
	{
		if((str[i] >= 0 && str[i] <= 31) || str[i] == 127)
		{
			ft_char_to_hexa(str[i]);
		}
		else
		{
			ft_putchar(str[i]);
		}
		i++;
	}
}

int	main()
{
	char	src[] = "hello \n world \f to help";
	ft_putstr_non_printable(src);
	return (0);
}
