#include "libft.h"

int ft_toupper(int c)
{
    if ('a' <= c && c <= 'z')
        c = c - 32;
    return (c);
}
/*
int	main()
{
	printf("%c", ft_toupper('c'));
}
*/