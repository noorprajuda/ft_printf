/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnoorpra <mnoorpra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/29 19:13:21 by mnoorpra          #+#    #+#             */
/*   Updated: 2026/04/30 17:37:58 by mnoorpra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_putchar(char c)
{
	return (write(1, &c, 1));
}

int ft_puthex(uintptr_t n, char c)
{
	char *hexdigits;
	int len;

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

int ft_putdec(long n)
{
	char c;
	int len;

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

int ft_putdecu(unsigned int n)
{
	char c;
	int len;

	len = 0;
	if (n / 10)
		len += ft_putdecu(n / 10);
	c = n % 10 + '0';
	len += write(1, &c, 1);
	return (len);
}

int ft_putstr(char *str)
{
	int len;
	int i;

	len = 0;
	i = 0;
	if (!str)
		str = "(null)";
	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		len++;
		i++;
	}
	return (len);
}

int ft_putptr(void *ptr)
{
	int len;

	len = 0;
	// if (!ptr)
	//	return (write(1, "(nil)", 5));
	len += write(1, "0x", 2);
	len += ft_puthex((uintptr_t)ptr, 'p');
	return (len);
}

int ft_putformat(va_list *arg_lst, char format)
{
	if (format == 'c')
		return (ft_putchar((char)va_arg(*arg_lst, int)));
	else if (format == 's')
		return (ft_putstr(va_arg(*arg_lst, char *)));
	else if (format == 'p')
		return (ft_putptr(va_arg(*arg_lst, void *)));
	else if (format == 'd' || format == 'i')
		return (ft_putdec(va_arg(*arg_lst, int)));
	else if (format == 'u')
		return (ft_putdecu(va_arg(*arg_lst, unsigned int)));
	else if (format == 'x' || format == 'X')
		return (ft_puthex(va_arg(*arg_lst, unsigned int), format));
	else if (format == '%')
		return (ft_putchar('%'));
	return (0);
}

int ft_printf(const char *format, ...)
{
	int len;
	va_list arg_lst;
	int i;

	va_start(arg_lst, format);
	len = 0;
	i = 0;
	while (format[i])
	{
		if (format[i] == '%')
		{
			i++;
			len += ft_putformat(&arg_lst, format[i]);
		}
		else
			len += ft_putchar(format[i]);
		i++;
	}
	va_end(arg_lst);
	return (len);
}
