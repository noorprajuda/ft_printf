/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putformat.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnoorpra <mnoorpra@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/01 11:33:18 by mnoorpra          #+#    #+#             */
/*   Updated: 2026/05/01 11:33:31 by mnoorpra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putformat(va_list *arg_lst, char format)
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
