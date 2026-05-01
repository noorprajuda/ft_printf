/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putdec.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnoorpra <mnoorpra@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/01 11:27:50 by mnoorpra          #+#    #+#             */
/*   Updated: 2026/05/01 11:28:10 by mnoorpra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

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
