#include "libft.h"

void ft_putnbr_fd(int n, int fd)
{
    if (n == -2147483648)
		ft_putstr_fd("-2147483648", fd);
	else
	{
		if (n < 0)
		{
			n = n * -1;
			ft_putchar_fd('-', fd);
		}
		if (n > 9)
			ft_putnbr_fd(n / 10, fd);
		ft_putchar_fd(n % 10 + '0', fd);
	}
}
/*
int	main()
{
	ft_putnbr_fd(4242, 1);
}
*/