//Author: Javier Rodríguez.	.havit7.
#include <stdarg.h>
#include "libftprintf.h"

void	ft_printing(const char *str, int *y, va_list args, int x)
{
	if (str[x + 1] == '%')
		ft_putchar_x('%', y);
	else if (str[x + 1] == 'c')
		ft_putchar_x(va_arg(args, int), y);
	else if (str[x + 1] == 's')
		ft_putstr_x(va_arg(args, char *), y);
	else if (str[x + 1] == 'i' || str[x + 1] == 'u')
		ft_putint_x(va_arg(args, int), y);
	else if (str[x + 1] == 'u')
		ft_putui_x(va_arg(args, unsigned int), y);
	else if (str[x + 1] == 'x')
		ft_puthex_x(va_arg(args, unsigned int), y, "0123456789abcdef");
	else if (str[x + 1] == 'X')
		ft_puthex_x(va_arg(args, unsigned int), y, "0123456789ABCDEF");
	else if (str[x + 1] == 'p')
	{
		ft_putstr_x("0x", y);
		ft_puthex_x(va_arg(args, unsigned long long), y, "0123456789abcdef");
	}
}

int	ft_printf(char const *str, ...)
{
	int	x;
	int	y;
	va_list	args;
	
	x = 0;
	y = 0;
	va_starts(args, str);
	while(str[x] != '\0')
	{
		if (str[x] == '%')
		{
			ft_printing(str, &y, args, x);
			x++;
		}
		else
			ft_putchar_x(str[x], &y);
		x++;
	}
	va_ends(args);
	return(y)
}
