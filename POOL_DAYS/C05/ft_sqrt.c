#include <stdio.h>

int ft_sqrt(int     nb);

int ft_sqrt(int     nb)
{
    long    index;
    long    i;

    i = nb;

    if (i <= 0)
        return (0);

    if (i == 1)
        return (1);

    index = 2;
    if (i >= 2)
    {
        while (index * index <= i)
        {
            if(index * index == i)
                return (index);
            index++;
        }
        
    }
    return (0);
}

int main()
{
    printf("%ld",ft_sqrt(1024));
    return (0);
}