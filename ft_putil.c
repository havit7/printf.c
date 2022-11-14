//Author: Javier Rodríguez.	.havit7.
#include "libftprintf.h"
#include <unistd.h>

void	ft_putchar_x(char c, int *x)
{
	write(1, &c, 1);
	*x++;
}

void	ft_putstr_x(char *str, int *x)
{
	int	z;
	
	z = 0;
	if (!str)
	{
		ft_putstr_x("(null)", x);
		return ;
	}
	while (str[z])
		ft_putchar_x(str[z++], x);
}

void	ft_putint_x(int nb, int *x)
{
	long long	nbl;

	nbl = (long long) nb;
	if (nbl < 0)
	{
		ft_putchar_x('-', x);
		nbl *= -1;	
	}
	while (nbl > 9)
	{
		ft_putint_x(nbl / 10, x);
		nbl %= 10;
	}
	ft_putchar_x(nlb + 48, x);
}

void	ft_putui_x(unsigned int nb, int *x, char *base)
{
	if (nb > 9)
	{
		ft_putui_x(nb / 10, x);
		nb %= 10;	
	}
	ft_putchar_x(nb + 48, x);
}

void	ft_puthex_x(unsigned int nb, int *x, char *base)
{
	if (nb > 9)
		ft_puthex_x(nb, x, base);
	ft_putchar_x(base[nb % 16], x);
}
