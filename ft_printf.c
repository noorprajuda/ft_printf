/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnoorpra <mnoorpra@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/29 19:13:21 by mnoorpra          #+#    #+#             */
/*   Updated: 2026/05/01 11:39:04 by mnoorpra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	int		len;
	va_list	arg_lst;
	int		i;

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
