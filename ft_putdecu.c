/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putdecu.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnoorpra <mnoorpra@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/01 11:29:17 by mnoorpra          #+#    #+#             */
/*   Updated: 2026/05/01 11:29:30 by mnoorpra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

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
