/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnoorpra <mnoorpra@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/01 11:23:49 by mnoorpra          #+#    #+#             */
/*   Updated: 2026/05/01 11:24:49 by mnoorpra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

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
