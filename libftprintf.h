// Author: Javier Rodríguez.	.havit7.
#ifndef LIBFTPRINTF_H

# define LIBFTPRINTF_H

void	ft_putchar_x(char c, int *x);
void	ft_putstr_x(char *str, int *x);
void	ft_putint_x(int nb, int *x);
void	ft_putui_x(unsigned int nb, int *x, char *base);
void	ft_puthex_x(unsigned long long nb, int *x, char *base);
int	ft_printf(char *str, ...);

#endif
