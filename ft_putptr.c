/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnoorpra <mnoorpra@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/01 11:30:24 by mnoorpra          #+#    #+#             */
/*   Updated: 2026/05/01 11:30:37 by mnoorpra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putptr(void *ptr)
{
	int	len;

	len = 0;
	if (!ptr)
		return (write(1, "(nil)", 5));
	len += write(1, "0x", 2);
	len += ft_puthex((uintptr_t)ptr, 'p');
	return (len);
}
