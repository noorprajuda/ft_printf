/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnoorpra <mnoorpra@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/29 19:13:21 by mnoorpra          #+#    #+#             */
/*   Updated: 2026/04/30 04:56:36 by mnoorpra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdint.h>
#include <stdarg.h>
#include "ft_printf.h"

int	ft_putchar(char c)
{
	return (write(1, &c, 1));
}

int	ft_puthex(uintptr_t n, char c)
{
	char	*hexdigits;
	int		len;

	len = 0;
	if (c == 'X')
		hexdigits = "0123456789ABCDEF";
	else
		hexdigits = "0123456789abcdef";

	if (n >= 16)
		len += ft_puthex(n / 16, c);
	len += write(1, &hexdigits[n % 16], 1);
	return (len);
}

int	ft_putdec(long n)
{
	char	c;
	int		len;

	c = '-';
	len = 0;
	if (n < 0)
	{
		len += write(1, &c, 1);
		n = -n;
	}
	if (n / 10)
		len += ft_putdec(n / 10);
	c = n % 10 + '0';
	len += write(1, &c, 1);
	return (len);
}

int	ft_putdecu(unsigned int n)
{
	char	c;
	int		len;

	len = 0;
	if (n / 10)
		len += ft_putdecu(n / 10);
	c = n % 10 + '0';
	len += write(1, &c, 1);
	return (len);
}

int	ft_printf(const char *format, ...)
{
	int				len;
	va_list			arg_lst;
	int				i;
	char			*str;
	void			*ptr;
	int				val;
	unsigned int	valu;
	int				j;
	int				c;

	va_start(arg_lst, format);
	len = 0;
	i = 0;
	while (format[i])
	{
		if (format[i] == '%')
		{
			i++;
			if (format[i] == 'c')
			{
				c = va_arg(arg_lst, int);
				ft_putchar(c);
				len++;
			}
			else if (format[i] == 's')
			{
				str = va_arg(arg_lst, char *);
				if (!str)
					str = "(null)";
				j = 0;
				while (str[j])
				{
					ft_putchar(str[j]);
					len++;
					j++;
				}
			}
			else if (format[i] == 'p')
			{
				ptr = va_arg(arg_lst, void *);
				if (ptr == ((void *) 0))
					len += write(1, "(nil)", 5);
				else
				{
					write(1, "0x", 2);
					len += ft_puthex((uintptr_t) ptr, format[i]);
				}
			}
			else if (format[i] == 'd' || format[i] == 'i')
			{
				val = va_arg(arg_lst, int);
				len += ft_putdec(val);
			}
			else if (format[i] == 'u')
			{
				valu = va_arg(arg_lst, unsigned int);
				len += ft_putdecu(valu);
			}
			else if (format[i] == 'x' || format[i] == 'X')
			{
				valu = va_arg(arg_lst, unsigned int);
				len += ft_puthex(valu, format[i]);
			}
			else if (format[i] == '%')
			{
				ft_putchar('%');
				len++;
			}
		}
		else
		{
			ft_putchar(format[i]);
			len++;
		}
		i++;
	}
	va_end(arg_lst);
	return (len);
}

int	main()
{
	ft_printf();
	return (0);
}
